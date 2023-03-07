/* Library Management System Script */

/* ADD BOOK TABLE */
create table lib 
( 
   bookname varchar(50),
   author varchar(50), 
   publication varchar(50), 
   noofcopies number,
   PRIMARY KEY (bookname)
);

/* LOGIN TABLE only for students */
CREATE TABLE students 
(
    email varchar(50) NOT NULL,
    password varchar(50) NOT NULL,
    name varchar(80) NOT NULL,
    age int,
    PRIMARY KEY (email),
    CHECK (age>=18)
);
/*SEQUENCE TO AUTO INCREMENT THE BOOKS NO ----> ACTING AS A PRIMARY ID*/
CREATE SEQUENCE seq_person
MINVALUE 1
START WITH 1
INCREMENT BY 1
CACHE 115000;


/* creation of the books table */
create table books 
( 
   bookno number, 
   bookname varchar(50),
   available varchar(20),
   subscribed_email varchar(50), 
   PRIMARY KEY (bookno),
   FOREIGN KEY (bookname) REFERENCES lib(bookname)
);

CREATE SEQUENCE seq_subID
MINVALUE 1
START WITH 1
INCREMENT BY 1
CACHE 11500;

/* Subscription table */
create table subscription
( 
   subID number,
   bookname varchar(50), 
   email varchar(50),
   do_sub date,
   do_return date,  
   fineamount number,
   status varchar(20),
   PRIMARY KEY (subID),
   FOREIGN KEY (bookname) REFERENCES lib(bookname)
);

/*PROC to add the books no refrence in the 'books' table*/
Declare
       bookno number;
       bname varchar(15);
       noc number;
       noc1 number;
       author varchar(15);
       publication varchar(10);
       nobooks number;
       lib_rec lib%rowtype;
begin
       bookno:=&bookno;
       bname:='&bookname';
       author:='&author';
       publication:='&publication';
       noc:=&noofcopies;
       noc1:=noc;
       select count(*) into nobooks from lib where bookname=bname;
       if nobooks=0 then
           insert into lib values(bname,author,publication,noc);
       else
           update lib set noofcopies=noofcopies+noc where bookname=bname;
       end if;
       while noc!=0
           loop
             insert into books values(bookno,bname,'YES',0);
             noc:=noc-1;
             bookno:=bookno+1;
           end loop;
end;

create or replace procedure ret(bno number)as
lib_rec lib%rowtype;
book_rec books%rowtype;
stud_rec student%rowtype;
sub_rec subscription%rowtype;
book_no number;
no_of_books number;
fine number;
begin
select * into book_rec from books where bookno=bno;
if book_rec.available='yes' then
else
update subscription set do_return=sysdate where bookno=bno and status='ntreturned';
select do_return-do_sub into fine from subscription where bookno=bno and status='ntreturned';
if fine>7 then
update subscription set fineamount=fine where bookno=bno and status='ntreturned';

end if;
update subscription set status='returned' where bookno=bno;
update student set no_card=no_card+1 where rollno=book_rec.subscribed_to;
update books set available='yes' where bookno=bno;
update books set subscribed_to=0 where bookno=bno;
end if;
end;

create or replace procedure sub(bname char,roll_no number)as
lib_rec lib%rowtype;
book_rec books%rowtype;
stud_rec student%rowtype;
sub_rec subscription%rowtype;
book_no number;
no_of_books number;
begin
select * into stud_rec from student where rollno=roll_no;
if stud_rec.no_card=0 then
else
select count(*) into no_of_books from books where bookname=bname and available='yes';
if no_of_books=0 then

else
select min(bookno) into book_no from books where bookname=bname and available='yes';
insert into subscription values(book_no,roll_no,sysdate,sysdate+7,0,'ntreturned');
update student set no_card=no_card-1 where rollno=roll_no;
update books set available='no' where bookno=book_no;
update books set subscribed_to=roll_no where bookno=book_no;
end if;
end if;
end;


select * from lib;
select * from books;
select * from subscription;







  























