use master

if exists(select * from sysdatabases where name = 'ShadowScreen') begin 
    print 'delete old version db ShadowScreen'
    drop database ShadowScreen
end

create database ShadowScreen on primary (
	name = ShadowScreen,
	filename ='S:\FinalProject\Database\AddFiles\ShadowScreen.mdf',
	size = 20MB,
	maxsize = unlimited,
	filegrowth = 10MB
) log on (
	name = ShadowScreen_log,
	filename ='S:\FinalProject\Database\AddFiles\ShadowScreen.ldf',
	size = 20MB,
	maxsize = unlimited,
	filegrowth = 10MB
) collate Latin1_General_CI_AI


