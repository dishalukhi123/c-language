create table tasks(
    id int not null ,
    title varchar(20) not null ,
    start_date date not null ,
    and_date date
);

insert into tasks(id, title, start_date, and_date)
values
(101,'Learn MySQL','2017-02-01','2017-02-02'),
(102,'Check and update','2017-02-01',null);

select * from tasks;

alter table tasks
      alter and_date set not null ;


SELECT * FROM INFORMATION_SCHEMA.COLUMNS
    WHERE table_name ='tasks';


ALTER TABLE tasks
    ALTER end_date DROP NOT NULL;


create table users(
    user_id int  primary key ,
    username varchar(40) not null ,
    password varchar(255) not null ,
    email varchar(255) not null
);

create table roles(
    role_id int primary key ,
    role_name varchar(50)
);

create table user_role(
    user_id int,
    role_id int,
    constraint pk_role_id_user_id
                    primary key (user_id,role_id)
);





