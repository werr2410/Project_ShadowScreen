use ShadowScreen

create table [Adress] (
	[AdressId]		int identity(1,1)	not null,
	
	[Country]		nvarchar(30)			null,
	[Town]			nvarchar(30)		not null,
	[Street]		nvarchar(30)		not null,
	[NumberHouse]	nvarchar(30)		not null,

	constraint PK_Adress_AdressId primary key	(AdressId),

	constraint CK_Adress_Town		 check		(len(Town) > 2),
	constraint CK_Adress_Street		 check		(len(Street) > 2),
	constraint CK_Adress_Numberphone check		(len(NumberHouse) >= 1)
)

create table [Bankcard] (
	[BankcardId]		int identity(1,1)	not null,
	[Title]				nvarchar(20)			null,
	[Number]			nvarchar(16)		not null,
	[ExpirationDate]	date					null,

	constraint PK_Bankcard_BankcardId primary key(BankcardId),

	constraint CK_BankCard_Number check(len(Number) = 16),
	constraint UQ_BankCard_Number unique(Number)
)

create table [Reviews] (
	[ReviewsId]		int identity(1,1)	not null,
	[Description]	nvarchar(300)			null,
	[Mark]			int					not null,

	constraint PK_Reviews_ReviewsId primary key(ReviewsId),
	constraint CK_Reviews_Mark check(Mark between 1 and 10)
)

create table [Delivery] (
	[DeliveryId]	int identity(1,1)	not null,
	[Title]			nvarchar(20)			null,
	[Type]			nvarchar(1)			not null,
	[AdressId]		int						null,

	constraint PK_Delivery_DeliveryId	primary key(DeliveryId),

	constraint FK_Delivery_Adress		foreign key(AdressId) references Adress(AdressId)
										on delete cascade on update no action
)

create table [Baseboard] (
	[BaseboardId]	int identity(1,1)	not null,
	[Manufacturer]	nvarchar(100)		not null,
	[Product]		nvarchar(100)		not null,
	[Description]	nvarchar(200)			null constraint DF_Baseboard_Description default 'no data',
	[IsSale]		bit						null constraint DF_Baseboard_IsSale		 default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_Baseboard_Stars		 default 0,
	[Status]		nvarchar(30)			null constraint DF_Baseboard_Status		 default 'OK',
	
	constraint FK_Baseboard_BaseboardId	primary key(BaseboardId)	
)

create table [Memorychip] (
	[MemorychipId]	int identity not null,
	[Manufacturer]	nvarchar(300) not null,
	[Capacity]		nvarchar(300) not null,
	[Description]	nvarchar(200)			null constraint DF_Memorychip_Description	default 'no data',
	[IsSale]		bit						null constraint DF_Memorychip_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_Memorychip_Stars			default 0,
	[Status]		nvarchar(30)			null constraint DF_Memorychip_Status		default 'OK',

	constraint FK_Memorychip_MemorychipId primary key(MemorychipId)
)

create table [CPU] (
	[CPUId]			int identity(1,1)	not null,
	[Manufacturer]	nvarchar(100)		not null,
	[Name]			nvarchar(100)		not null,
	[Description]	nvarchar(200)			null constraint DF_CPU_Description	default 'no data',
	[IsSale]		bit						null constraint DF_CPU_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_CPU_Stars		default 0,
	[Status]		nvarchar(30)			null constraint DF_CPU_Status		default 'OK',

	constraint FK_CPU_CPUId primary key(CPUId)
)

create table [GPU] (
	[GPUId]			int identity(1,1)	not null,
	[Manufacturer]	nvarchar(200)		not null,
	[Description]	nvarchar(200)			null constraint DF_GPU_Description	default 'no data',
	[IsSale]		bit						null constraint DF_GPU_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_GPU_Stars		default 0,
	[Status]		nvarchar(30)			null constraint DF_GPU_Status		default 'OK',

	constraint FK_GPU_GPUId primary key(GPUId)
)

create table [Storage] (
	[StorageId]		int identity(1,1)	not null,
	[Manufacturer]	nvarchar(400)		not null,
	[Model]			nvarchar(400)		not null,
	[Size]			nvarchar(200)		not null,
	[Description]	nvarchar(200)			null constraint DF_Storage_Description	default 'no data',
	[IsSale]		bit						null constraint DF_Storage_IsSale		default 0,
	[Image]			varbinary(MAX)			null,
	[Stars]			int						null constraint DF_Storage_Stars		default 0,
	[Status]		nvarchar(30)			null constraint DF_Storage_Status		default 'OK',

	constraint FK_Storage_StorageId primary key(StorageId)
)

create table [Computer] (
	[ComputerId]	int identity(1,1)	not null,
	[Title]			nvarchar(50)			null,
	
	[CPUId]			int						null,
	[GPUId]			int						null,
	[StorageId]		int						null,
	[MemorychipId]	int						null,
	[BaseboardId]	int						null,

	constraint PK_Computer_ComputerId primary key(ComputerId),

	constraint FK_Computer_GPU			foreign key(GPUId) references GPU(GPUId)
												on delete cascade on update no action,

	constraint FK_Computer_CPU			foreign key(CPUId) references CPU(CPUId)
												on delete cascade on update no action,

	constraint FK_Computer_Storage		foreign key(StorageId) references Storage(StorageId)
												on delete cascade on update no action,

	constraint FK_Computer_Memorychip	foreign key(MemorychipId) references Memorychip(MemorychipId)
												on delete cascade on update no action,

	constraint FK_Computer_Baseboard	foreign key(BaseboardId) references Baseboard(BaseboardId)
												on delete cascade on update no action
)

create table [Chat] (
	[ChatId]			int identity(1,1)	not null,
	[UsernameSenderId]	int					not null,
	[UsernameOrderId]	int					not null,

	constraint FK_Chat_ChatId primary key(ChatId)
)

create table [Message] (
	[MessageId]		int identity(1,1)	not null,

	[MessageData]	nvarchar(100)		not null,
	[Datetime]		datetime			not null	constraint DF_Message_DateTime default getdate(),
	[IsSender]		bit					not null,
	[IsViewed]		bit					not null	constraint DF_Message_IsViewed default 0,

	[ChatId]		int					not null,

	constraint PK_Message_MessageId primary key(MessageId),
	constraint FK_Message_Chat foreign key(ChatId) references Chat(ChatId)
								on delete no action on update no action
)
