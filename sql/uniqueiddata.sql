-- MySQL dump 10.13  Distrib 5.7.13, for Win64 (x86_64)
--
-- Host: localhost    Database: sapphire
-- ------------------------------------------------------
-- Server version	5.7.13-log

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `uniqueiddata`
--

DROP TABLE IF EXISTS `uniqueiddata`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `uniqueiddata` (
  `NextId` int(20) NOT NULL AUTO_INCREMENT,
  `IdName` varchar(16) DEFAULT 'NOT SET',
  `IS_DELETE` int(3) DEFAULT '0',
  `IS_NOT_ACTIVE_FLG` int(3) DEFAULT '0',
  `UPDATE_DATE` DATETIME NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`NextId`)
) ENGINE=MyISAM AUTO_INCREMENT=1000447 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `uniqueiddata`
--

LOCK TABLES `uniqueiddata` WRITE;
/*!40000 ALTER TABLE `uniqueiddata` DISABLE KEYS */;
INSERT INTO `uniqueiddata` VALUES (1,'NOT_SET',0,0,'2016-02-10 22:04:00');
INSERT INTO `uniqueiddata` VALUES (2,'NOT_SET',0,0,'2016-02-10 22:04:23');
INSERT INTO `uniqueiddata` VALUES (3,'NOT_SET',0,0,'2016-02-10 22:06:29');
INSERT INTO `uniqueiddata` VALUES (4,'NOT_SET',0,0,'2016-02-10 22:06:29');
INSERT INTO `uniqueiddata` VALUES (5,'NOT_SET',0,0,'2016-02-10 22:06:29');
INSERT INTO `uniqueiddata` VALUES (6,'NOT_SET',0,0,'2016-02-10 22:06:29');
INSERT INTO `uniqueiddata` VALUES (1000001,'NOT_SET',0,0,'2016-02-10 22:07:59');
INSERT INTO `uniqueiddata` VALUES (1000002,'NOT_SET',0,0,'2016-02-10 22:07:59');
INSERT INTO `uniqueiddata` VALUES (1000003,'NOT_SET',0,0,'2016-02-10 22:07:59');
INSERT INTO `uniqueiddata` VALUES (1000004,'NOT_SET',0,0,'2016-02-10 22:07:59');
INSERT INTO `uniqueiddata` VALUES (1000005,'NOT_SET',0,0,'2016-02-11 00:50:07');
INSERT INTO `uniqueiddata` VALUES (1000006,'NOT_SET',0,0,'2016-02-11 00:54:50');
INSERT INTO `uniqueiddata` VALUES (1000007,'NOT_SET',0,0,'2016-02-11 20:46:38');
INSERT INTO `uniqueiddata` VALUES (1000008,'NOT_SET',0,0,'2016-02-11 20:46:47');
INSERT INTO `uniqueiddata` VALUES (1000009,'NOT_SET',0,0,'2016-02-11 20:46:54');
INSERT INTO `uniqueiddata` VALUES (1000010,'NOT_SET',0,0,'2016-02-11 20:47:04');
INSERT INTO `uniqueiddata` VALUES (1000011,'NOT_SET',0,0,'2016-02-11 20:47:11');
INSERT INTO `uniqueiddata` VALUES (1000012,'NOT_SET',0,0,'2016-02-11 22:20:14');
INSERT INTO `uniqueiddata` VALUES (1000013,'NOT_SET',0,0,'2016-02-12 08:18:49');
INSERT INTO `uniqueiddata` VALUES (1000014,'NOT_SET',0,0,'2016-02-12 08:22:10');
INSERT INTO `uniqueiddata` VALUES (1000015,'NOT_SET',0,0,'2016-02-12 18:54:51');
INSERT INTO `uniqueiddata` VALUES (1000016,'NOT_SET',0,0,'2016-02-12 18:54:51');
INSERT INTO `uniqueiddata` VALUES (1000017,'NOT_SET',0,0,'2016-02-12 18:54:51');
INSERT INTO `uniqueiddata` VALUES (1000018,'NOT_SET',0,0,'2016-02-12 18:54:51');
INSERT INTO `uniqueiddata` VALUES (1000019,'NOT_SET',0,0,'2016-02-12 18:54:51');
INSERT INTO `uniqueiddata` VALUES (1000020,'NOT_SET',0,0,'2016-02-13 11:45:32');
INSERT INTO `uniqueiddata` VALUES (1000021,'NOT_SET',0,0,'2016-02-13 11:45:40');
INSERT INTO `uniqueiddata` VALUES (1000022,'NOT_SET',0,0,'2016-02-13 11:45:43');
INSERT INTO `uniqueiddata` VALUES (1000023,'NOT_SET',0,0,'2016-02-13 11:46:02');
INSERT INTO `uniqueiddata` VALUES (1000024,'NOT_SET',0,0,'2016-02-13 11:46:04');
INSERT INTO `uniqueiddata` VALUES (1000025,'NOT_SET',0,0,'2016-02-13 11:46:06');
INSERT INTO `uniqueiddata` VALUES (1000026,'NOT_SET',0,0,'2016-02-13 11:46:08');
INSERT INTO `uniqueiddata` VALUES (1000027,'NOT_SET',0,0,'2016-02-13 11:46:10');
INSERT INTO `uniqueiddata` VALUES (1000028,'NOT_SET',0,0,'2016-02-13 11:50:06');
INSERT INTO `uniqueiddata` VALUES (1000029,'NOT_SET',0,0,'2016-02-13 11:51:25');
INSERT INTO `uniqueiddata` VALUES (1000030,'NOT_SET',0,0,'2016-02-13 11:55:58');
INSERT INTO `uniqueiddata` VALUES (1000031,'NOT_SET',0,0,'2016-02-13 11:56:02');
INSERT INTO `uniqueiddata` VALUES (1000032,'NOT_SET',0,0,'2016-02-13 11:56:05');
INSERT INTO `uniqueiddata` VALUES (1000033,'NOT_SET',0,0,'2016-02-13 11:56:08');
INSERT INTO `uniqueiddata` VALUES (1000034,'NOT_SET',0,0,'2016-02-13 11:56:11');
INSERT INTO `uniqueiddata` VALUES (1000035,'NOT_SET',0,0,'2016-02-13 11:56:17');
INSERT INTO `uniqueiddata` VALUES (1000036,'NOT_SET',0,0,'2016-02-13 11:57:24');
INSERT INTO `uniqueiddata` VALUES (1000037,'NOT_SET',0,0,'2016-02-13 11:57:27');
INSERT INTO `uniqueiddata` VALUES (1000038,'NOT_SET',0,0,'2016-02-13 11:57:28');
INSERT INTO `uniqueiddata` VALUES (1000039,'NOT_SET',0,0,'2016-02-13 11:57:29');
INSERT INTO `uniqueiddata` VALUES (1000040,'NOT_SET',0,0,'2016-02-13 11:57:30');
INSERT INTO `uniqueiddata` VALUES (1000041,'NOT_SET',0,0,'2016-02-13 11:57:31');
INSERT INTO `uniqueiddata` VALUES (1000042,'NOT_SET',0,0,'2016-02-13 11:57:34');
INSERT INTO `uniqueiddata` VALUES (1000043,'NOT_SET',0,0,'2016-02-13 11:57:36');
INSERT INTO `uniqueiddata` VALUES (1000044,'NOT_SET',0,0,'2016-02-13 11:57:37');
INSERT INTO `uniqueiddata` VALUES (1000045,'NOT_SET',0,0,'2016-02-13 11:57:38');
INSERT INTO `uniqueiddata` VALUES (1000046,'NOT_SET',0,0,'2016-02-13 11:57:39');
INSERT INTO `uniqueiddata` VALUES (1000047,'NOT_SET',0,0,'2016-02-13 11:57:40');
INSERT INTO `uniqueiddata` VALUES (1000048,'NOT_SET',0,0,'2016-02-13 11:57:41');
INSERT INTO `uniqueiddata` VALUES (1000049,'NOT_SET',0,0,'2016-02-13 11:57:42');
INSERT INTO `uniqueiddata` VALUES (1000050,'NOT_SET',0,0,'2016-02-13 11:57:44');
INSERT INTO `uniqueiddata` VALUES (1000051,'NOT_SET',0,0,'2016-02-13 11:57:47');
INSERT INTO `uniqueiddata` VALUES (1000052,'NOT_SET',0,0,'2016-02-13 11:57:50');
INSERT INTO `uniqueiddata` VALUES (1000053,'NOT_SET',0,0,'2016-02-13 11:57:52');
INSERT INTO `uniqueiddata` VALUES (1000054,'NOT_SET',0,0,'2016-02-13 11:57:55');
INSERT INTO `uniqueiddata` VALUES (1000055,'NOT_SET',0,0,'2016-02-13 11:57:57');
INSERT INTO `uniqueiddata` VALUES (1000056,'NOT_SET',0,0,'2016-02-13 11:57:57');
INSERT INTO `uniqueiddata` VALUES (1000057,'NOT_SET',0,0,'2016-02-13 11:58:00');
INSERT INTO `uniqueiddata` VALUES (1000058,'NOT_SET',0,0,'2016-02-13 11:58:00');
INSERT INTO `uniqueiddata` VALUES (1000059,'NOT_SET',0,0,'2016-02-13 11:58:02');
INSERT INTO `uniqueiddata` VALUES (1000060,'NOT_SET',0,0,'2016-02-13 11:58:02');
INSERT INTO `uniqueiddata` VALUES (1000061,'NOT_SET',0,0,'2016-02-13 13:03:07');
INSERT INTO `uniqueiddata` VALUES (1000062,'NOT_SET',0,0,'2016-02-13 13:03:07');
INSERT INTO `uniqueiddata` VALUES (1000063,'NOT_SET',0,0,'2016-02-13 13:03:51');
INSERT INTO `uniqueiddata` VALUES (1000064,'NOT_SET',0,0,'2016-02-13 13:03:51');
INSERT INTO `uniqueiddata` VALUES (1000065,'NOT_SET',0,0,'2016-02-13 13:04:03');
INSERT INTO `uniqueiddata` VALUES (1000066,'NOT_SET',0,0,'2016-02-13 13:04:07');
INSERT INTO `uniqueiddata` VALUES (1000067,'NOT_SET',0,0,'2016-02-13 13:04:20');
INSERT INTO `uniqueiddata` VALUES (1000068,'NOT_SET',0,0,'2016-02-13 13:04:41');
INSERT INTO `uniqueiddata` VALUES (1000069,'NOT_SET',0,0,'2016-02-15 11:43:46');
INSERT INTO `uniqueiddata` VALUES (1000070,'NOT_SET',0,0,'2016-02-15 11:43:46');
INSERT INTO `uniqueiddata` VALUES (1000071,'NOT_SET',0,0,'2016-02-15 11:43:46');
INSERT INTO `uniqueiddata` VALUES (1000072,'NOT_SET',0,0,'2016-02-15 11:43:46');
INSERT INTO `uniqueiddata` VALUES (1000073,'NOT_SET',0,0,'2016-02-15 11:43:46');
INSERT INTO `uniqueiddata` VALUES (1000074,'NOT_SET',0,0,'2016-02-15 12:12:37');
INSERT INTO `uniqueiddata` VALUES (1000075,'NOT_SET',0,0,'2016-02-15 12:12:37');
INSERT INTO `uniqueiddata` VALUES (1000076,'NOT_SET',0,0,'2016-02-15 12:12:37');
INSERT INTO `uniqueiddata` VALUES (1000077,'NOT_SET',0,0,'2016-02-15 12:12:37');
INSERT INTO `uniqueiddata` VALUES (1000078,'NOT_SET',0,0,'2016-02-15 12:12:37');
INSERT INTO `uniqueiddata` VALUES (1000079,'NOT_SET',0,0,'2016-02-15 13:19:52');
INSERT INTO `uniqueiddata` VALUES (1000080,'NOT_SET',0,0,'2016-02-15 13:22:50');
INSERT INTO `uniqueiddata` VALUES (1000081,'NOT_SET',0,0,'2016-02-15 13:28:08');
INSERT INTO `uniqueiddata` VALUES (1000082,'NOT_SET',0,0,'2016-02-15 13:31:52');
INSERT INTO `uniqueiddata` VALUES (1000083,'NOT_SET',0,0,'2016-02-15 13:33:42');
INSERT INTO `uniqueiddata` VALUES (1000084,'NOT_SET',0,0,'2016-02-15 13:35:28');
INSERT INTO `uniqueiddata` VALUES (1000085,'NOT_SET',0,0,'2016-02-15 13:50:28');
INSERT INTO `uniqueiddata` VALUES (1000086,'NOT_SET',0,0,'2016-02-15 14:28:11');
INSERT INTO `uniqueiddata` VALUES (1000087,'NOT_SET',0,0,'2016-02-15 14:28:21');
INSERT INTO `uniqueiddata` VALUES (1000088,'NOT_SET',0,0,'2016-02-15 14:28:25');
INSERT INTO `uniqueiddata` VALUES (1000089,'NOT_SET',0,0,'2016-02-15 14:28:26');
INSERT INTO `uniqueiddata` VALUES (1000090,'NOT_SET',0,0,'2016-02-15 14:28:26');
INSERT INTO `uniqueiddata` VALUES (1000091,'NOT_SET',0,0,'2016-02-15 14:28:27');
INSERT INTO `uniqueiddata` VALUES (1000092,'NOT_SET',0,0,'2016-02-15 14:28:27');
INSERT INTO `uniqueiddata` VALUES (1000093,'NOT_SET',0,0,'2016-02-15 14:28:35');
INSERT INTO `uniqueiddata` VALUES (1000094,'NOT_SET',0,0,'2016-02-15 14:40:54');
INSERT INTO `uniqueiddata` VALUES (1000095,'NOT_SET',0,0,'2016-02-15 14:42:22');
INSERT INTO `uniqueiddata` VALUES (1000096,'NOT_SET',0,0,'2016-02-15 14:44:54');
INSERT INTO `uniqueiddata` VALUES (1000097,'NOT_SET',0,0,'2016-02-15 14:50:58');
INSERT INTO `uniqueiddata` VALUES (1000098,'NOT_SET',0,0,'2016-02-15 14:51:00');
INSERT INTO `uniqueiddata` VALUES (1000099,'NOT_SET',0,0,'2016-02-15 14:51:02');
INSERT INTO `uniqueiddata` VALUES (1000100,'NOT_SET',0,0,'2016-02-15 14:51:02');
INSERT INTO `uniqueiddata` VALUES (1000101,'NOT_SET',0,0,'2016-02-15 14:51:15');
INSERT INTO `uniqueiddata` VALUES (1000102,'NOT_SET',0,0,'2016-02-15 14:51:17');
INSERT INTO `uniqueiddata` VALUES (1000103,'NOT_SET',0,0,'2016-02-15 14:51:18');
INSERT INTO `uniqueiddata` VALUES (1000104,'NOT_SET',0,0,'2016-02-15 14:51:19');
INSERT INTO `uniqueiddata` VALUES (1000105,'NOT_SET',0,0,'2016-02-15 14:51:19');
INSERT INTO `uniqueiddata` VALUES (1000106,'NOT_SET',0,0,'2016-02-15 14:51:20');
INSERT INTO `uniqueiddata` VALUES (1000107,'NOT_SET',0,0,'2016-02-15 14:51:20');
INSERT INTO `uniqueiddata` VALUES (1000108,'NOT_SET',0,0,'2016-02-15 14:51:21');
INSERT INTO `uniqueiddata` VALUES (1000109,'NOT_SET',0,0,'2016-02-15 14:51:21');
INSERT INTO `uniqueiddata` VALUES (1000110,'NOT_SET',0,0,'2016-02-15 14:51:22');
INSERT INTO `uniqueiddata` VALUES (1000111,'NOT_SET',0,0,'2016-02-15 14:51:23');
INSERT INTO `uniqueiddata` VALUES (1000112,'NOT_SET',0,0,'2016-02-15 14:51:24');
INSERT INTO `uniqueiddata` VALUES (1000113,'NOT_SET',0,0,'2016-02-15 14:51:25');
INSERT INTO `uniqueiddata` VALUES (1000114,'NOT_SET',0,0,'2016-02-15 14:51:26');
INSERT INTO `uniqueiddata` VALUES (1000115,'NOT_SET',0,0,'2016-02-15 14:51:26');
INSERT INTO `uniqueiddata` VALUES (1000116,'NOT_SET',0,0,'2016-02-15 14:51:27');
INSERT INTO `uniqueiddata` VALUES (1000117,'NOT_SET',0,0,'2016-02-15 14:51:28');
INSERT INTO `uniqueiddata` VALUES (1000118,'NOT_SET',0,0,'2016-02-15 14:51:29');
INSERT INTO `uniqueiddata` VALUES (1000119,'NOT_SET',0,0,'2016-02-15 14:51:29');
INSERT INTO `uniqueiddata` VALUES (1000120,'NOT_SET',0,0,'2016-02-15 14:51:30');
INSERT INTO `uniqueiddata` VALUES (1000121,'NOT_SET',0,0,'2016-02-15 14:51:31');
INSERT INTO `uniqueiddata` VALUES (1000122,'NOT_SET',0,0,'2016-02-15 14:51:31');
INSERT INTO `uniqueiddata` VALUES (1000123,'NOT_SET',0,0,'2016-02-15 14:51:31');
INSERT INTO `uniqueiddata` VALUES (1000124,'NOT_SET',0,0,'2016-02-15 14:51:32');
INSERT INTO `uniqueiddata` VALUES (1000125,'NOT_SET',0,0,'2016-02-15 14:51:32');
INSERT INTO `uniqueiddata` VALUES (1000126,'NOT_SET',0,0,'2016-02-15 14:51:33');
INSERT INTO `uniqueiddata` VALUES (1000127,'NOT_SET',0,0,'2016-02-15 14:51:33');
INSERT INTO `uniqueiddata` VALUES (1000128,'NOT_SET',0,0,'2016-02-15 14:52:22');
INSERT INTO `uniqueiddata` VALUES (1000129,'NOT_SET',0,0,'2016-02-15 14:52:22');
INSERT INTO `uniqueiddata` VALUES (1000130,'NOT_SET',0,0,'2016-02-15 14:52:39');
INSERT INTO `uniqueiddata` VALUES (1000131,'NOT_SET',0,0,'2016-02-15 14:52:39');
INSERT INTO `uniqueiddata` VALUES (1000132,'NOT_SET',0,0,'2016-02-15 15:09:49');
INSERT INTO `uniqueiddata` VALUES (1000133,'NOT_SET',0,0,'2016-02-15 15:09:56');
INSERT INTO `uniqueiddata` VALUES (1000134,'NOT_SET',0,0,'2016-02-15 15:10:05');
INSERT INTO `uniqueiddata` VALUES (1000135,'NOT_SET',0,0,'2016-02-15 15:10:05');
INSERT INTO `uniqueiddata` VALUES (1000136,'NOT_SET',0,0,'2016-02-15 15:10:14');
INSERT INTO `uniqueiddata` VALUES (1000137,'NOT_SET',0,0,'2016-02-15 15:10:14');
INSERT INTO `uniqueiddata` VALUES (1000138,'NOT_SET',0,0,'2016-02-15 15:10:34');
INSERT INTO `uniqueiddata` VALUES (1000139,'NOT_SET',0,0,'2016-02-15 15:10:34');
INSERT INTO `uniqueiddata` VALUES (1000140,'NOT_SET',0,0,'2016-02-15 15:11:20');
INSERT INTO `uniqueiddata` VALUES (1000141,'NOT_SET',0,0,'2016-02-15 15:11:20');
INSERT INTO `uniqueiddata` VALUES (1000142,'NOT_SET',0,0,'2016-02-15 15:12:49');
INSERT INTO `uniqueiddata` VALUES (1000143,'NOT_SET',0,0,'2016-02-15 15:12:49');
INSERT INTO `uniqueiddata` VALUES (1000144,'NOT_SET',0,0,'2016-02-15 15:14:34');
INSERT INTO `uniqueiddata` VALUES (1000145,'NOT_SET',0,0,'2016-02-15 15:14:34');
INSERT INTO `uniqueiddata` VALUES (1000146,'NOT_SET',0,0,'2016-02-15 15:14:38');
INSERT INTO `uniqueiddata` VALUES (1000147,'NOT_SET',0,0,'2016-02-15 15:14:38');
INSERT INTO `uniqueiddata` VALUES (1000148,'NOT_SET',0,0,'2016-02-15 15:14:41');
INSERT INTO `uniqueiddata` VALUES (1000149,'NOT_SET',0,0,'2016-02-15 15:14:41');
INSERT INTO `uniqueiddata` VALUES (1000150,'NOT_SET',0,0,'2016-02-15 15:14:42');
INSERT INTO `uniqueiddata` VALUES (1000151,'NOT_SET',0,0,'2016-02-15 15:14:42');
INSERT INTO `uniqueiddata` VALUES (1000152,'NOT_SET',0,0,'2016-02-15 15:18:32');
INSERT INTO `uniqueiddata` VALUES (1000153,'NOT_SET',0,0,'2016-02-15 15:18:32');
INSERT INTO `uniqueiddata` VALUES (1000154,'NOT_SET',0,0,'2016-02-15 15:18:47');
INSERT INTO `uniqueiddata` VALUES (1000155,'NOT_SET',0,0,'2016-02-15 15:18:47');
INSERT INTO `uniqueiddata` VALUES (1000156,'NOT_SET',0,0,'2016-02-15 15:18:59');
INSERT INTO `uniqueiddata` VALUES (1000157,'NOT_SET',0,0,'2016-02-15 15:18:59');
INSERT INTO `uniqueiddata` VALUES (1000158,'NOT_SET',0,0,'2016-02-15 15:19:09');
INSERT INTO `uniqueiddata` VALUES (1000159,'NOT_SET',0,0,'2016-02-15 15:19:09');
INSERT INTO `uniqueiddata` VALUES (1000160,'NOT_SET',0,0,'2016-02-15 15:19:10');
INSERT INTO `uniqueiddata` VALUES (1000161,'NOT_SET',0,0,'2016-02-15 15:19:10');
INSERT INTO `uniqueiddata` VALUES (1000162,'NOT_SET',0,0,'2016-02-15 15:20:33');
INSERT INTO `uniqueiddata` VALUES (1000163,'NOT_SET',0,0,'2016-02-15 15:20:33');
INSERT INTO `uniqueiddata` VALUES (1000164,'NOT_SET',0,0,'2016-02-15 15:21:20');
INSERT INTO `uniqueiddata` VALUES (1000165,'NOT_SET',0,0,'2016-02-15 15:21:20');
INSERT INTO `uniqueiddata` VALUES (1000166,'NOT_SET',0,0,'2016-02-15 15:21:46');
INSERT INTO `uniqueiddata` VALUES (1000167,'NOT_SET',0,0,'2016-02-15 15:21:46');
INSERT INTO `uniqueiddata` VALUES (1000168,'NOT_SET',0,0,'2016-02-15 15:23:36');
INSERT INTO `uniqueiddata` VALUES (1000169,'NOT_SET',0,0,'2016-02-15 15:23:36');
INSERT INTO `uniqueiddata` VALUES (1000170,'NOT_SET',0,0,'2016-02-15 15:23:51');
INSERT INTO `uniqueiddata` VALUES (1000171,'NOT_SET',0,0,'2016-02-15 15:23:51');
INSERT INTO `uniqueiddata` VALUES (1000172,'NOT_SET',0,0,'2016-02-15 15:29:44');
INSERT INTO `uniqueiddata` VALUES (1000173,'NOT_SET',0,0,'2016-02-15 15:29:44');
INSERT INTO `uniqueiddata` VALUES (1000174,'NOT_SET',0,0,'2016-02-15 15:29:44');
INSERT INTO `uniqueiddata` VALUES (1000175,'NOT_SET',0,0,'2016-02-15 15:32:11');
INSERT INTO `uniqueiddata` VALUES (1000176,'NOT_SET',0,0,'2016-02-15 15:32:11');
INSERT INTO `uniqueiddata` VALUES (1000177,'NOT_SET',0,0,'2016-02-15 15:32:11');
INSERT INTO `uniqueiddata` VALUES (1000178,'NOT_SET',0,0,'2016-02-15 15:32:24');
INSERT INTO `uniqueiddata` VALUES (1000179,'NOT_SET',0,0,'2016-02-15 15:32:24');
INSERT INTO `uniqueiddata` VALUES (1000180,'NOT_SET',0,0,'2016-02-15 15:32:24');
INSERT INTO `uniqueiddata` VALUES (1000181,'NOT_SET',0,0,'2016-02-15 15:34:55');
INSERT INTO `uniqueiddata` VALUES (1000182,'NOT_SET',0,0,'2016-02-15 15:34:55');
INSERT INTO `uniqueiddata` VALUES (1000183,'NOT_SET',0,0,'2016-02-15 15:34:55');
INSERT INTO `uniqueiddata` VALUES (1000184,'NOT_SET',0,0,'2016-02-15 16:12:30');
INSERT INTO `uniqueiddata` VALUES (1000185,'NOT_SET',0,0,'2016-02-15 16:12:30');
INSERT INTO `uniqueiddata` VALUES (1000186,'NOT_SET',0,0,'2016-02-15 16:12:30');
INSERT INTO `uniqueiddata` VALUES (1000187,'NOT_SET',0,0,'2016-02-15 16:12:44');
INSERT INTO `uniqueiddata` VALUES (1000188,'NOT_SET',0,0,'2016-02-15 16:12:44');
INSERT INTO `uniqueiddata` VALUES (1000189,'NOT_SET',0,0,'2016-02-15 16:12:44');
INSERT INTO `uniqueiddata` VALUES (1000190,'NOT_SET',0,0,'2016-02-15 16:12:45');
INSERT INTO `uniqueiddata` VALUES (1000191,'NOT_SET',0,0,'2016-02-15 16:12:45');
INSERT INTO `uniqueiddata` VALUES (1000192,'NOT_SET',0,0,'2016-02-15 16:12:45');
INSERT INTO `uniqueiddata` VALUES (1000193,'NOT_SET',0,0,'2016-02-15 16:12:46');
INSERT INTO `uniqueiddata` VALUES (1000194,'NOT_SET',0,0,'2016-02-15 16:12:46');
INSERT INTO `uniqueiddata` VALUES (1000195,'NOT_SET',0,0,'2016-02-15 16:12:46');
INSERT INTO `uniqueiddata` VALUES (1000196,'NOT_SET',0,0,'2016-02-15 16:12:46');
INSERT INTO `uniqueiddata` VALUES (1000197,'NOT_SET',0,0,'2016-02-15 16:12:46');
INSERT INTO `uniqueiddata` VALUES (1000198,'NOT_SET',0,0,'2016-02-15 16:12:46');
INSERT INTO `uniqueiddata` VALUES (1000199,'NOT_SET',0,0,'2016-02-15 16:14:50');
INSERT INTO `uniqueiddata` VALUES (1000200,'NOT_SET',0,0,'2016-02-15 16:14:50');
INSERT INTO `uniqueiddata` VALUES (1000201,'NOT_SET',0,0,'2016-02-15 16:14:50');
INSERT INTO `uniqueiddata` VALUES (1000202,'NOT_SET',0,0,'2016-02-15 16:15:03');
INSERT INTO `uniqueiddata` VALUES (1000203,'NOT_SET',0,0,'2016-02-15 16:15:03');
INSERT INTO `uniqueiddata` VALUES (1000204,'NOT_SET',0,0,'2016-02-15 16:15:03');
INSERT INTO `uniqueiddata` VALUES (1000205,'NOT_SET',0,0,'2016-02-15 16:15:11');
INSERT INTO `uniqueiddata` VALUES (1000206,'NOT_SET',0,0,'2016-02-15 16:15:11');
INSERT INTO `uniqueiddata` VALUES (1000207,'NOT_SET',0,0,'2016-02-15 16:15:11');
INSERT INTO `uniqueiddata` VALUES (1000208,'NOT_SET',0,0,'2016-02-15 22:32:45');
INSERT INTO `uniqueiddata` VALUES (1000209,'NOT_SET',0,0,'2016-02-15 22:32:45');
INSERT INTO `uniqueiddata` VALUES (1000210,'NOT_SET',0,0,'2016-02-15 22:32:45');
INSERT INTO `uniqueiddata` VALUES (1000211,'NOT_SET',0,0,'2016-02-15 22:32:45');
INSERT INTO `uniqueiddata` VALUES (1000212,'NOT_SET',0,0,'2016-02-15 22:32:45');
INSERT INTO `uniqueiddata` VALUES (1000213,'NOT_SET',0,0,'2016-02-15 22:34:23');
INSERT INTO `uniqueiddata` VALUES (1000214,'NOT_SET',0,0,'2016-02-15 23:11:20');
INSERT INTO `uniqueiddata` VALUES (1000215,'NOT_SET',0,0,'2016-02-15 23:11:20');
INSERT INTO `uniqueiddata` VALUES (1000216,'NOT_SET',0,0,'2016-02-15 23:11:20');
INSERT INTO `uniqueiddata` VALUES (1000217,'NOT_SET',0,0,'2016-02-15 23:11:20');
INSERT INTO `uniqueiddata` VALUES (1000218,'NOT_SET',0,0,'2016-02-15 23:11:20');
INSERT INTO `uniqueiddata` VALUES (1000219,'NOT_SET',0,0,'2016-02-15 23:16:58');
INSERT INTO `uniqueiddata` VALUES (1000220,'NOT_SET',0,0,'2016-02-16 19:00:04');
INSERT INTO `uniqueiddata` VALUES (1000221,'NOT_SET',0,0,'2016-02-16 19:03:23');
INSERT INTO `uniqueiddata` VALUES (1000222,'NOT_SET',0,0,'2016-02-16 19:06:00');
INSERT INTO `uniqueiddata` VALUES (1000223,'NOT_SET',0,0,'2016-02-16 19:11:54');
INSERT INTO `uniqueiddata` VALUES (1000224,'NOT_SET',0,0,'2016-02-16 19:14:18');
INSERT INTO `uniqueiddata` VALUES (1000225,'NOT_SET',0,0,'2016-02-16 19:22:28');
INSERT INTO `uniqueiddata` VALUES (1000226,'NOT_SET',0,0,'2016-02-16 21:43:08');
INSERT INTO `uniqueiddata` VALUES (1000227,'NOT_SET',0,0,'2016-02-16 21:44:28');
INSERT INTO `uniqueiddata` VALUES (1000228,'NOT_SET',0,0,'2016-02-16 21:46:22');
INSERT INTO `uniqueiddata` VALUES (1000229,'NOT_SET',0,0,'2016-02-16 21:46:52');
INSERT INTO `uniqueiddata` VALUES (1000230,'NOT_SET',0,0,'2016-02-16 21:47:53');
INSERT INTO `uniqueiddata` VALUES (1000231,'NOT_SET',0,0,'2016-02-16 21:48:12');
INSERT INTO `uniqueiddata` VALUES (1000232,'NOT_SET',0,0,'2016-02-16 21:48:59');
INSERT INTO `uniqueiddata` VALUES (1000233,'NOT_SET',0,0,'2016-02-16 21:49:38');
INSERT INTO `uniqueiddata` VALUES (1000234,'NOT_SET',0,0,'2016-02-16 21:51:07');
INSERT INTO `uniqueiddata` VALUES (1000235,'NOT_SET',0,0,'2016-02-16 21:51:19');
INSERT INTO `uniqueiddata` VALUES (1000236,'NOT_SET',0,0,'2016-02-16 21:57:09');
INSERT INTO `uniqueiddata` VALUES (1000237,'NOT_SET',0,0,'2016-02-16 22:12:34');
INSERT INTO `uniqueiddata` VALUES (1000238,'NOT_SET',0,0,'2016-02-16 22:12:45');
INSERT INTO `uniqueiddata` VALUES (1000239,'NOT_SET',0,0,'2016-02-16 22:13:01');
INSERT INTO `uniqueiddata` VALUES (1000240,'NOT_SET',0,0,'2016-02-16 22:13:08');
INSERT INTO `uniqueiddata` VALUES (1000241,'NOT_SET',0,0,'2016-02-17 23:58:31');
INSERT INTO `uniqueiddata` VALUES (1000242,'NOT_SET',0,0,'2016-02-17 23:58:38');
INSERT INTO `uniqueiddata` VALUES (1000243,'NOT_SET',0,0,'2016-02-17 23:58:46');
INSERT INTO `uniqueiddata` VALUES (1000244,'NOT_SET',0,0,'2016-02-18 00:00:21');
INSERT INTO `uniqueiddata` VALUES (1000245,'NOT_SET',0,0,'2016-02-18 00:02:48');
INSERT INTO `uniqueiddata` VALUES (1000246,'NOT_SET',0,0,'2016-02-18 00:05:42');
INSERT INTO `uniqueiddata` VALUES (1000247,'NOT_SET',0,0,'2016-02-18 00:06:33');
INSERT INTO `uniqueiddata` VALUES (1000248,'NOT_SET',0,0,'2016-02-18 00:11:51');
INSERT INTO `uniqueiddata` VALUES (1000249,'NOT_SET',0,0,'2016-02-18 00:15:13');
INSERT INTO `uniqueiddata` VALUES (1000250,'NOT_SET',0,0,'2016-02-18 00:20:42');
INSERT INTO `uniqueiddata` VALUES (1000251,'NOT_SET',0,0,'2016-02-18 00:22:35');
INSERT INTO `uniqueiddata` VALUES (1000252,'NOT_SET',0,0,'2016-02-18 00:29:39');
INSERT INTO `uniqueiddata` VALUES (1000253,'NOT_SET',0,0,'2016-02-18 00:34:22');
INSERT INTO `uniqueiddata` VALUES (1000254,'NOT_SET',0,0,'2016-02-18 00:35:05');
INSERT INTO `uniqueiddata` VALUES (1000255,'NOT_SET',0,0,'2016-02-18 00:35:10');
INSERT INTO `uniqueiddata` VALUES (1000256,'NOT_SET',0,0,'2016-02-18 00:35:14');
INSERT INTO `uniqueiddata` VALUES (1000257,'NOT_SET',0,0,'2016-02-18 00:35:17');
INSERT INTO `uniqueiddata` VALUES (1000258,'NOT_SET',0,0,'2016-02-18 00:35:22');
INSERT INTO `uniqueiddata` VALUES (1000259,'NOT_SET',0,0,'2016-02-18 00:35:27');
INSERT INTO `uniqueiddata` VALUES (1000260,'NOT_SET',0,0,'2016-02-18 00:35:37');
INSERT INTO `uniqueiddata` VALUES (1000261,'NOT_SET',0,0,'2016-02-18 00:36:37');
INSERT INTO `uniqueiddata` VALUES (1000262,'NOT_SET',0,0,'2016-02-18 00:36:48');
INSERT INTO `uniqueiddata` VALUES (1000263,'NOT_SET',0,0,'2016-02-18 00:36:53');
INSERT INTO `uniqueiddata` VALUES (1000264,'NOT_SET',0,0,'2016-02-18 00:36:57');
INSERT INTO `uniqueiddata` VALUES (1000265,'NOT_SET',0,0,'2016-02-18 00:37:01');
INSERT INTO `uniqueiddata` VALUES (1000266,'NOT_SET',0,0,'2016-02-18 00:37:05');
INSERT INTO `uniqueiddata` VALUES (1000267,'NOT_SET',0,0,'2016-02-18 00:37:07');
INSERT INTO `uniqueiddata` VALUES (1000268,'NOT_SET',0,0,'2016-02-18 00:37:20');
INSERT INTO `uniqueiddata` VALUES (1000269,'NOT_SET',0,0,'2016-02-18 00:41:21');
INSERT INTO `uniqueiddata` VALUES (1000270,'NOT_SET',0,0,'2016-02-18 00:41:55');
INSERT INTO `uniqueiddata` VALUES (1000271,'NOT_SET',0,0,'2016-02-18 00:42:00');
INSERT INTO `uniqueiddata` VALUES (1000272,'NOT_SET',0,0,'2016-02-18 00:42:03');
INSERT INTO `uniqueiddata` VALUES (1000273,'NOT_SET',0,0,'2016-02-18 00:42:09');
INSERT INTO `uniqueiddata` VALUES (1000274,'NOT_SET',0,0,'2016-02-18 00:43:13');
INSERT INTO `uniqueiddata` VALUES (1000275,'NOT_SET',0,0,'2016-02-18 00:43:18');
INSERT INTO `uniqueiddata` VALUES (1000276,'NOT_SET',0,0,'2016-02-18 00:44:32');
INSERT INTO `uniqueiddata` VALUES (1000277,'NOT_SET',0,0,'2016-02-18 00:45:24');
INSERT INTO `uniqueiddata` VALUES (1000278,'NOT_SET',0,0,'2016-02-18 17:38:42');
INSERT INTO `uniqueiddata` VALUES (1000279,'NOT_SET',0,0,'2016-02-18 17:38:50');
INSERT INTO `uniqueiddata` VALUES (1000280,'NOT_SET',0,0,'2016-02-18 17:38:59');
INSERT INTO `uniqueiddata` VALUES (1000281,'NOT_SET',0,0,'2016-02-18 17:39:04');
INSERT INTO `uniqueiddata` VALUES (1000282,'NOT_SET',0,0,'2016-02-18 17:39:12');
INSERT INTO `uniqueiddata` VALUES (1000283,'NOT_SET',0,0,'2016-02-18 17:39:21');
INSERT INTO `uniqueiddata` VALUES (1000284,'NOT_SET',0,0,'2016-02-18 17:39:37');
INSERT INTO `uniqueiddata` VALUES (1000285,'NOT_SET',0,0,'2016-02-18 17:39:55');
INSERT INTO `uniqueiddata` VALUES (1000286,'NOT_SET',0,0,'2016-02-18 17:40:03');
INSERT INTO `uniqueiddata` VALUES (1000287,'NOT_SET',0,0,'2016-02-18 17:40:10');
INSERT INTO `uniqueiddata` VALUES (1000288,'NOT_SET',0,0,'2016-02-18 17:40:24');
INSERT INTO `uniqueiddata` VALUES (1000289,'NOT_SET',0,0,'2016-02-18 17:40:29');
INSERT INTO `uniqueiddata` VALUES (1000290,'NOT_SET',0,0,'2016-02-18 17:40:32');
INSERT INTO `uniqueiddata` VALUES (1000291,'NOT_SET',0,0,'2016-02-18 17:40:46');
INSERT INTO `uniqueiddata` VALUES (1000292,'NOT_SET',0,0,'2016-02-18 17:41:00');
INSERT INTO `uniqueiddata` VALUES (1000293,'NOT_SET',0,0,'2016-02-18 17:41:09');
INSERT INTO `uniqueiddata` VALUES (1000294,'NOT_SET',0,0,'2016-02-18 17:41:12');
INSERT INTO `uniqueiddata` VALUES (1000295,'NOT_SET',0,0,'2016-02-18 17:41:16');
INSERT INTO `uniqueiddata` VALUES (1000296,'NOT_SET',0,0,'2016-02-18 17:41:44');
INSERT INTO `uniqueiddata` VALUES (1000297,'NOT_SET',0,0,'2016-02-18 17:41:50');
INSERT INTO `uniqueiddata` VALUES (1000298,'NOT_SET',0,0,'2016-02-18 17:41:54');
INSERT INTO `uniqueiddata` VALUES (1000299,'NOT_SET',0,0,'2016-02-18 17:41:58');
INSERT INTO `uniqueiddata` VALUES (1000300,'NOT_SET',0,0,'2016-02-18 17:42:02');
INSERT INTO `uniqueiddata` VALUES (1000301,'NOT_SET',0,0,'2016-02-18 17:42:06');
INSERT INTO `uniqueiddata` VALUES (1000302,'NOT_SET',0,0,'2016-02-18 17:42:11');
INSERT INTO `uniqueiddata` VALUES (1000303,'NOT_SET',0,0,'2016-02-18 17:42:48');
INSERT INTO `uniqueiddata` VALUES (1000304,'NOT_SET',0,0,'2016-02-18 17:42:52');
INSERT INTO `uniqueiddata` VALUES (1000305,'NOT_SET',0,0,'2016-02-18 17:43:05');
INSERT INTO `uniqueiddata` VALUES (1000306,'NOT_SET',0,0,'2016-02-18 17:43:11');
INSERT INTO `uniqueiddata` VALUES (1000307,'NOT_SET',0,0,'2016-02-18 17:43:28');
INSERT INTO `uniqueiddata` VALUES (1000308,'NOT_SET',0,0,'2016-02-18 17:43:38');
INSERT INTO `uniqueiddata` VALUES (1000309,'NOT_SET',0,0,'2016-02-18 17:43:45');
INSERT INTO `uniqueiddata` VALUES (1000310,'NOT_SET',0,0,'2016-02-18 17:43:47');
INSERT INTO `uniqueiddata` VALUES (1000311,'NOT_SET',0,0,'2016-02-18 17:43:52');
INSERT INTO `uniqueiddata` VALUES (1000312,'NOT_SET',0,0,'2016-02-18 17:43:57');
INSERT INTO `uniqueiddata` VALUES (1000313,'NOT_SET',0,0,'2016-02-18 17:44:03');
INSERT INTO `uniqueiddata` VALUES (1000314,'NOT_SET',0,0,'2016-02-18 17:44:10');
INSERT INTO `uniqueiddata` VALUES (1000315,'NOT_SET',0,0,'2016-02-18 17:44:13');
INSERT INTO `uniqueiddata` VALUES (1000316,'NOT_SET',0,0,'2016-02-18 17:44:17');
INSERT INTO `uniqueiddata` VALUES (1000317,'NOT_SET',0,0,'2016-02-18 17:44:20');
INSERT INTO `uniqueiddata` VALUES (1000318,'NOT_SET',0,0,'2016-02-18 17:44:29');
INSERT INTO `uniqueiddata` VALUES (1000319,'NOT_SET',0,0,'2016-02-18 17:46:36');
INSERT INTO `uniqueiddata` VALUES (1000320,'NOT_SET',0,0,'2016-02-18 17:46:46');
INSERT INTO `uniqueiddata` VALUES (1000321,'NOT_SET',0,0,'2016-02-18 17:50:52');
INSERT INTO `uniqueiddata` VALUES (1000322,'NOT_SET',0,0,'2016-02-18 17:50:59');
INSERT INTO `uniqueiddata` VALUES (1000323,'NOT_SET',0,0,'2016-02-18 20:27:42');
INSERT INTO `uniqueiddata` VALUES (1000324,'NOT_SET',0,0,'2016-02-18 20:28:24');
INSERT INTO `uniqueiddata` VALUES (1000325,'NOT_SET',0,0,'2016-02-18 20:28:41');
INSERT INTO `uniqueiddata` VALUES (1000326,'NOT_SET',0,0,'2016-02-18 20:30:27');
INSERT INTO `uniqueiddata` VALUES (1000327,'NOT_SET',0,0,'2016-02-18 22:45:38');
INSERT INTO `uniqueiddata` VALUES (1000328,'NOT_SET',0,0,'2016-02-18 22:46:11');
INSERT INTO `uniqueiddata` VALUES (1000329,'NOT_SET',0,0,'2016-02-18 22:47:38');
INSERT INTO `uniqueiddata` VALUES (1000330,'NOT_SET',0,0,'2016-02-18 22:47:50');
INSERT INTO `uniqueiddata` VALUES (1000331,'NOT_SET',0,0,'2016-06-02 21:29:07');
INSERT INTO `uniqueiddata` VALUES (1000332,'NOT_SET',0,0,'2016-06-02 21:29:07');
INSERT INTO `uniqueiddata` VALUES (1000333,'NOT_SET',0,0,'2016-06-02 21:29:07');
INSERT INTO `uniqueiddata` VALUES (1000334,'NOT_SET',0,0,'2016-06-02 21:29:07');
INSERT INTO `uniqueiddata` VALUES (1000335,'NOT_SET',0,0,'2016-06-02 21:29:07');
INSERT INTO `uniqueiddata` VALUES (1000336,'NOT_SET',0,0,'2016-06-02 21:31:00');
INSERT INTO `uniqueiddata` VALUES (1000337,'NOT_SET',0,0,'2016-06-07 09:43:05');
INSERT INTO `uniqueiddata` VALUES (1000338,'NOT_SET',0,0,'2016-06-07 09:44:38');
INSERT INTO `uniqueiddata` VALUES (1000339,'NOT_SET',0,0,'2016-06-07 09:46:36');
INSERT INTO `uniqueiddata` VALUES (1000340,'NOT_SET',0,0,'2016-06-07 10:04:57');
INSERT INTO `uniqueiddata` VALUES (1000341,'NOT_SET',0,0,'2016-06-12 12:38:23');
INSERT INTO `uniqueiddata` VALUES (1000342,'NOT_SET',0,0,'2016-06-12 12:38:23');
INSERT INTO `uniqueiddata` VALUES (1000343,'NOT_SET',0,0,'2016-06-12 12:38:23');
INSERT INTO `uniqueiddata` VALUES (1000344,'NOT_SET',0,0,'2016-06-12 12:38:23');
INSERT INTO `uniqueiddata` VALUES (1000345,'NOT_SET',0,0,'2016-06-12 12:38:23');
INSERT INTO `uniqueiddata` VALUES (1000346,'NOT_SET',0,0,'2016-06-12 14:09:36');
INSERT INTO `uniqueiddata` VALUES (1000347,'NOT_SET',0,0,'2016-06-12 14:09:36');
INSERT INTO `uniqueiddata` VALUES (1000348,'NOT_SET',0,0,'2016-06-12 14:09:36');
INSERT INTO `uniqueiddata` VALUES (1000349,'NOT_SET',0,0,'2016-06-12 14:09:36');
INSERT INTO `uniqueiddata` VALUES (1000350,'NOT_SET',0,0,'2016-06-12 14:09:36');
INSERT INTO `uniqueiddata` VALUES (1000351,'NOT_SET',0,0,'2016-06-12 14:14:55');
INSERT INTO `uniqueiddata` VALUES (1000352,'NOT_SET',0,0,'2016-06-14 10:55:22');
INSERT INTO `uniqueiddata` VALUES (1000353,'NOT_SET',0,0,'2016-06-14 10:55:22');
INSERT INTO `uniqueiddata` VALUES (1000354,'NOT_SET',0,0,'2016-06-14 10:55:22');
INSERT INTO `uniqueiddata` VALUES (1000355,'NOT_SET',0,0,'2016-06-14 10:55:22');
INSERT INTO `uniqueiddata` VALUES (1000356,'NOT_SET',0,0,'2016-06-14 10:55:22');
INSERT INTO `uniqueiddata` VALUES (1000357,'NOT_SET',0,0,'2016-06-14 10:57:31');
INSERT INTO `uniqueiddata` VALUES (1000358,'NOT_SET',0,0,'2016-06-24 17:11:46');
INSERT INTO `uniqueiddata` VALUES (1000359,'NOT_SET',0,0,'2016-06-24 17:11:46');
INSERT INTO `uniqueiddata` VALUES (1000360,'NOT_SET',0,0,'2016-06-24 17:11:46');
INSERT INTO `uniqueiddata` VALUES (1000361,'NOT_SET',0,0,'2016-06-24 17:11:46');
INSERT INTO `uniqueiddata` VALUES (1000362,'NOT_SET',0,0,'2016-06-24 17:11:46');
INSERT INTO `uniqueiddata` VALUES (1000363,'NOT_SET',0,0,'2016-07-03 23:42:26');
INSERT INTO `uniqueiddata` VALUES (1000364,'NOT_SET',0,0,'2016-07-03 23:42:26');
INSERT INTO `uniqueiddata` VALUES (1000365,'NOT_SET',0,0,'2016-07-03 23:42:26');
INSERT INTO `uniqueiddata` VALUES (1000366,'NOT_SET',0,0,'2016-07-03 23:42:26');
INSERT INTO `uniqueiddata` VALUES (1000367,'NOT_SET',0,0,'2016-07-03 23:42:26');
INSERT INTO `uniqueiddata` VALUES (1000368,'NOT_SET',0,0,'2016-07-03 23:44:12');
INSERT INTO `uniqueiddata` VALUES (1000369,'NOT_SET',0,0,'2016-07-03 23:50:02');
INSERT INTO `uniqueiddata` VALUES (1000370,'NOT_SET',0,0,'2016-07-03 23:50:02');
INSERT INTO `uniqueiddata` VALUES (1000371,'NOT_SET',0,0,'2016-07-03 23:50:02');
INSERT INTO `uniqueiddata` VALUES (1000372,'NOT_SET',0,0,'2016-07-03 23:50:02');
INSERT INTO `uniqueiddata` VALUES (1000373,'NOT_SET',0,0,'2016-07-03 23:50:02');
INSERT INTO `uniqueiddata` VALUES (1000374,'NOT_SET',0,0,'2016-07-05 18:50:51');
INSERT INTO `uniqueiddata` VALUES (1000375,'NOT_SET',0,0,'2016-07-05 23:11:55');
INSERT INTO `uniqueiddata` VALUES (1000376,'NOT_SET',0,0,'2016-07-05 23:11:55');
INSERT INTO `uniqueiddata` VALUES (1000377,'NOT_SET',0,0,'2016-07-05 23:11:55');
INSERT INTO `uniqueiddata` VALUES (1000378,'NOT_SET',0,0,'2016-07-05 23:11:55');
INSERT INTO `uniqueiddata` VALUES (1000379,'NOT_SET',0,0,'2016-07-05 23:11:55');
INSERT INTO `uniqueiddata` VALUES (1000380,'NOT_SET',0,0,'2016-07-05 23:15:14');
INSERT INTO `uniqueiddata` VALUES (1000381,'NOT_SET',0,0,'2016-07-06 08:57:30');
INSERT INTO `uniqueiddata` VALUES (1000382,'NOT_SET',0,0,'2016-07-06 08:57:30');
INSERT INTO `uniqueiddata` VALUES (1000383,'NOT_SET',0,0,'2016-07-06 08:57:30');
INSERT INTO `uniqueiddata` VALUES (1000384,'NOT_SET',0,0,'2016-07-06 08:57:30');
INSERT INTO `uniqueiddata` VALUES (1000385,'NOT_SET',0,0,'2016-07-06 08:57:30');
INSERT INTO `uniqueiddata` VALUES (1000386,'NOT_SET',0,0,'2016-07-06 08:58:55');
INSERT INTO `uniqueiddata` VALUES (1000387,'NOT_SET',0,0,'2016-07-06 14:24:09');
INSERT INTO `uniqueiddata` VALUES (1000388,'NOT_SET',0,0,'2016-07-06 14:24:09');
INSERT INTO `uniqueiddata` VALUES (1000389,'NOT_SET',0,0,'2016-07-06 14:24:09');
INSERT INTO `uniqueiddata` VALUES (1000390,'NOT_SET',0,0,'2016-07-06 14:24:09');
INSERT INTO `uniqueiddata` VALUES (1000391,'NOT_SET',0,0,'2016-07-06 14:24:09');
INSERT INTO `uniqueiddata` VALUES (1000392,'NOT_SET',0,0,'2016-07-06 14:25:57');
INSERT INTO `uniqueiddata` VALUES (1000393,'NOT_SET',0,0,'2016-07-07 01:23:56');
INSERT INTO `uniqueiddata` VALUES (1000394,'NOT_SET',0,0,'2016-07-07 01:23:56');
INSERT INTO `uniqueiddata` VALUES (1000395,'NOT_SET',0,0,'2016-07-07 01:23:56');
INSERT INTO `uniqueiddata` VALUES (1000396,'NOT_SET',0,0,'2016-07-07 01:23:56');
INSERT INTO `uniqueiddata` VALUES (1000397,'NOT_SET',0,0,'2016-07-07 01:23:56');
INSERT INTO `uniqueiddata` VALUES (1000398,'NOT_SET',0,0,'2016-07-07 01:45:10');
INSERT INTO `uniqueiddata` VALUES (1000399,'NOT_SET',0,0,'2016-07-07 01:51:59');
INSERT INTO `uniqueiddata` VALUES (1000400,'NOT_SET',0,0,'2016-07-07 01:51:59');
INSERT INTO `uniqueiddata` VALUES (1000401,'NOT_SET',0,0,'2016-07-07 01:51:59');
INSERT INTO `uniqueiddata` VALUES (1000402,'NOT_SET',0,0,'2016-07-07 01:51:59');
INSERT INTO `uniqueiddata` VALUES (1000403,'NOT_SET',0,0,'2016-07-07 01:51:59');
INSERT INTO `uniqueiddata` VALUES (1000404,'NOT_SET',0,0,'2016-07-07 01:53:28');
INSERT INTO `uniqueiddata` VALUES (1000405,'NOT_SET',0,0,'2016-07-08 01:21:37');
INSERT INTO `uniqueiddata` VALUES (1000406,'NOT_SET',0,0,'2016-07-08 01:21:37');
INSERT INTO `uniqueiddata` VALUES (1000407,'NOT_SET',0,0,'2016-07-08 01:21:37');
INSERT INTO `uniqueiddata` VALUES (1000408,'NOT_SET',0,0,'2016-07-08 01:21:37');
INSERT INTO `uniqueiddata` VALUES (1000409,'NOT_SET',0,0,'2016-07-08 01:21:37');
INSERT INTO `uniqueiddata` VALUES (1000410,'NOT_SET',0,0,'2016-07-08 01:23:17');
INSERT INTO `uniqueiddata` VALUES (1000411,'NOT_SET',0,0,'2016-07-14 10:19:45');
INSERT INTO `uniqueiddata` VALUES (1000412,'NOT_SET',0,0,'2016-07-14 10:19:45');
INSERT INTO `uniqueiddata` VALUES (1000413,'NOT_SET',0,0,'2016-07-14 10:19:45');
INSERT INTO `uniqueiddata` VALUES (1000414,'NOT_SET',0,0,'2016-07-14 10:19:45');
INSERT INTO `uniqueiddata` VALUES (1000415,'NOT_SET',0,0,'2016-07-14 10:19:45');
INSERT INTO `uniqueiddata` VALUES (1000416,'NOT_SET',0,0,'2016-07-14 10:21:22');
INSERT INTO `uniqueiddata` VALUES (1000417,'NOT_SET',0,0,'2016-07-14 13:19:59');
INSERT INTO `uniqueiddata` VALUES (1000418,'NOT_SET',0,0,'2016-07-14 13:19:59');
INSERT INTO `uniqueiddata` VALUES (1000419,'NOT_SET',0,0,'2016-07-14 13:19:59');
INSERT INTO `uniqueiddata` VALUES (1000420,'NOT_SET',0,0,'2016-07-14 13:19:59');
INSERT INTO `uniqueiddata` VALUES (1000421,'NOT_SET',0,0,'2016-07-14 13:19:59');
INSERT INTO `uniqueiddata` VALUES (1000422,'NOT_SET',0,0,'2016-07-14 13:22:36');
INSERT INTO `uniqueiddata` VALUES (1000423,'NOT_SET',0,0,'2016-07-14 13:27:51');
INSERT INTO `uniqueiddata` VALUES (1000424,'NOT_SET',0,0,'2016-07-14 13:27:51');
INSERT INTO `uniqueiddata` VALUES (1000425,'NOT_SET',0,0,'2016-07-14 13:27:51');
INSERT INTO `uniqueiddata` VALUES (1000426,'NOT_SET',0,0,'2016-07-14 13:27:51');
INSERT INTO `uniqueiddata` VALUES (1000427,'NOT_SET',0,0,'2016-07-14 13:27:51');
INSERT INTO `uniqueiddata` VALUES (1000428,'NOT_SET',0,0,'2016-07-14 13:29:27');
INSERT INTO `uniqueiddata` VALUES (1000429,'NOT_SET',0,0,'2016-07-20 16:28:04');
INSERT INTO `uniqueiddata` VALUES (1000430,'NOT_SET',0,0,'2016-07-20 16:28:04');
INSERT INTO `uniqueiddata` VALUES (1000431,'NOT_SET',0,0,'2016-07-20 16:28:04');
INSERT INTO `uniqueiddata` VALUES (1000432,'NOT_SET',0,0,'2016-07-20 16:28:04');
INSERT INTO `uniqueiddata` VALUES (1000433,'NOT_SET',0,0,'2016-07-20 16:28:04');
INSERT INTO `uniqueiddata` VALUES (1000434,'NOT_SET',0,0,'2016-07-20 17:16:05');
INSERT INTO `uniqueiddata` VALUES (1000435,'NOT_SET',0,0,'2016-07-23 20:32:11');
INSERT INTO `uniqueiddata` VALUES (1000436,'NOT_SET',0,0,'2016-07-23 20:32:11');
INSERT INTO `uniqueiddata` VALUES (1000437,'NOT_SET',0,0,'2016-07-23 20:32:11');
INSERT INTO `uniqueiddata` VALUES (1000438,'NOT_SET',0,0,'2016-07-23 20:32:11');
INSERT INTO `uniqueiddata` VALUES (1000439,'NOT_SET',0,0,'2016-07-23 20:32:11');
INSERT INTO `uniqueiddata` VALUES (1000440,'NOT_SET',0,0,'2016-07-23 20:54:37');
INSERT INTO `uniqueiddata` VALUES (1000441,'NOT_SET',0,0,'2016-07-28 20:18:23');
INSERT INTO `uniqueiddata` VALUES (1000442,'NOT_SET',0,0,'2016-07-28 20:18:23');
INSERT INTO `uniqueiddata` VALUES (1000443,'NOT_SET',0,0,'2016-07-28 20:18:23');
INSERT INTO `uniqueiddata` VALUES (1000444,'NOT_SET',0,0,'2016-07-28 20:18:23');
INSERT INTO `uniqueiddata` VALUES (1000445,'NOT_SET',0,0,'2016-07-28 20:18:23');
INSERT INTO `uniqueiddata` VALUES (1000446,'NOT_SET',0,0,'2016-07-28 20:20:56');
/*!40000 ALTER TABLE `uniqueiddata` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-12-09 17:37:16
