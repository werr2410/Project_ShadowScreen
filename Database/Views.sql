use ShadowScreen

-- Adress
go
create view SmallAdress(Town, Street, Number) as
	select Town, Street, NumberHouse as Number
	from Adress

go create view SmallStringAdress(adress) as
	select (Town + ' ' + Street + ' ' + NumberHouse) as adress
	from Adress

go create view StringAdress(adress) as
	select (Country + ' ' + Town + ' ' + Street + ' ' + NumberHouse) as adress
	from Adress

go create view CountAdress(amount) as
	select count(*) as amount
	from Adress

-- Delivery

go create view DeliveryNovaPoshta(title, adressId) as
	select title, AdressId
	from Delivery
	where Delivery.Type = 'n'

go create view DeliveryUkrPoshta(title, AdressId) as
	select title, AdressId 
	from Delivery
	where Type = 'u'

go create view DeliveryMeest(title, AdressId) as
	select title, AdressId
	from Delivery
	where Type = 'm'

go create view DeliveryCount(amount) as
	select count(*) as amount
	from Delivery

-- BankCard

go create view BankcardCount(amount) as
	select count(*) as amount
	from Bankcard

go create view getBankCardOnly(Number, [Date]) as
	select Number, ExpirationDate as [Date]
	from Bankcard

-- Reviews

go create view ReviewsCount(amount) as 
	select count(*) as amount
	from Reviews

go create view ReviewsBad(ReviewsId, [Description], Mark) as
	select ReviewsId, [Description], Mark
	from Reviews
	where Mark between 0 and 3

go create view ReviewsGood(ReviewsId, [Description], Mark) as
	select ReviewsId, [Description], Mark
	from Reviews
	where Mark between 4 and 7

go create view ReviewsGreat(ReviewsId, [Description], Mark) as
	select ReviewsId, [Description], Mark 
	from Reviews
	where Mark between 8 and 10

-- CPU
go create view CPUCount(amount)as
	select count(*) as [amount]
	from CPU

-- GPU

go create view GPUCount(amount) as
	select count(*) as [amount]
	from GPU

-- Baseboard

go create view BaseboardCount(amount) as
	select count(*) as [amount]
	from Baseboard

-- Memorychip

go create view MemorychipCount(amount) as
	select COUNT(*) as [amount]  
	from Memorychip

-- Storage

go create view StorageCount(amount) as
	select count(*) as [amount]
	from Storage

-- Computer

go create view ComputerCount(amount) as
	select count(*) as amount
	from Computer

go create view FullComputer(cmpId, cmpTitle, baseId, bcdesc, bcImage, bsIsSale, bcManufacture, bcProduct, bcStars, bcStatus,
							mcCapacity, mcDesc, mcImage, mcIsSale, mcManufacture, mcId, mcStars, mcStatus,
							stgDesc, stgImage, stgIsSale, stgManufacturer, stgModel, stgSize, stgStars, stgStatus,
							gpuDesc, gpuid, gpuImage, gpuIsSale, gpuManufacturer, gpuStars, gpuStatus, stgStorageId,
							cpuId, cpuDesc, cpuImage, cpuIsSale, cpuManufacturer, cpuName, cpuStars, cpuStatus) as
	select cmp.ComputerId as cmpId, cmp.Title as cmpTitle, 
		   bc.BaseboardId as baseId, bc.Description as bcdesc, bc.Image as bcImage, bc.IsSale as bsIsSale, bc.Manufacturer as bcManufacture, bc.Product as bcProduct, bc.Stars as bcStars, bc.Status as bcStatus,
		   mc.Capacity as mcCapacity, mc.Description as mcDesc, mc.Image as mcImage, mc.IsSale as mcIsSale, mc.Manufacturer as mcManufacture, mc.MemorychipId as mcId, mc.Stars as mcStars, mc.Status as mcStatus,
		   stg.Description as stgDesc, stg.Image as stgImage, stg.IsSale as stgIsSale, stg.Manufacturer as stgManufacturer, stg.Model  as stgModel, stg.Size as stgSize, stg.Stars as stgStars, stg.Status as stgStatus, stg.StorageId as stgStorageId,
		   gpu.Description as gpuDesc, gpu.GPUId as gpuid, gpu.Image as gpuImage, gpu.IsSale as gpuIsSale, gpu.Manufacturer as gpuManufacturer, gpu.Stars as gpuStars,  gpu.Status as gpuStatus,
		   cpu.CPUId as cpuId, cpu.Description as cpuDesc, cpu.Image as cpuImage, cpu.IsSale as cpuIsSale, cpu.Manufacturer as cpuManufacturer, cpu.Name as cpuName, cpu.Stars as  cpuStars, cpu.Status as cpuStatus
	
	from Computer as cmp
	inner join CPU			as cpu	ON cpu.CPUId       = cmp.CPUId
	inner join GPU			as gpu	ON gpu.GPUId       = cmp.GPUId
	inner join Storage		as stg	ON stg.StorageId   = cmp.StorageId
	inner join Memorychip	as mc	ON mc.MemorychipId = cmp.MemorychipId
	inner join Baseboard	as bc	ON bc.BaseboardId  = cmp.BaseboardId


-- chat and message

go create view CountMessage(amount) as
	select count(*) as amount
	from [Message]

go create view CountChat(amount) as
	select count(*) as amount
	from Chat

go create view CountMessageInChat(amount, chatid) as
	select count(*) as amount, [Message].ChatId
	from [Message]
	inner join Chat ON [Message].ChatId = Chat.ChatId
	group by [Message].ChatId