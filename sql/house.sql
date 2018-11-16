CREATE TABLE `house` (
	`LandSetId` INT UNSIGNED NULL,
	`HouseId` INT UNSIGNED NOT NULL AUTO_INCREMENT,
	`BuildTime` BIGINT NULL,
	`Aetheryte` SMALLINT NULL, 
	`Welcome` SMALLINT NULL,  
	`Comment` binary(193) DEFAULT "", 
	`Endorsements` BIGINT NULL, 
	UPDATE_DATE DATETIME NULL,
        PRIMARY KEY(`HouseId`)
)
COLLATE='latin1_swedish_ci'
ENGINE=InnoDB;

ALTER TABLE house AUTO_INCREMENT=1;
