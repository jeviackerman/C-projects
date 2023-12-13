-- MySQL dump 10.13  Distrib 8.0.24, for Win64 (x86_64)
--
-- Host: localhost    Database: timetable
-- ------------------------------------------------------
-- Server version	8.0.24

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `times`
--

DROP TABLE IF EXISTS `times`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `times` (
  `ModuleID` varchar(10) NOT NULL,
  `Day1` varchar(10) DEFAULT NULL,
  `PeriodNo1` varchar(10) DEFAULT NULL,
  `Day2` varchar(10) DEFAULT NULL,
  `PeriodNo2` varchar(10) DEFAULT NULL,
  `Day3` varchar(10) DEFAULT NULL,
  `PeriodNo3` varchar(10) DEFAULT NULL,
  `Day4` varchar(10) DEFAULT NULL,
  `PeriodNo4` varchar(10) DEFAULT NULL,
  `Day5` varchar(10) DEFAULT NULL,
  `PeriodNo5` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`ModuleID`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `times`
--

LOCK TABLES `times` WRITE;
/*!40000 ALTER TABLE `times` DISABLE KEYS */;
INSERT INTO `times` VALUES ('CHEM181','Monday','2','Wednesday','4','Friday','6','NULL','NULL','NULL','NULL'),('ENCH1TC','Monday','3','Wednesday','5','Friday','2','NULL','NULL','NULL','NULL'),('ENEL2CA','Wednesday','1','Tuesday','1','Thursday','3','Friday','1','NULL','NULL'),('ENEL2EA','Monday','1','Wednesday','6','Friday','7','NULL','NULL','NULL','NULL'),('ENME1DR','Tuesday','7','Tuesday','8','Thursday','2','Wednesday','2','NULL','NULL'),('MATH131','Tuesday','3','Thursday','5','Thursday','6','Friday','1','NULL','NULL'),('MATH132','Monday','4','Monday','5','Friday','2','Thursday','7','Thursday','8'),('PHYS151','Tuesday','4','Tuesday','5','Thursday','1','Friday','5','Monday','8');
/*!40000 ALTER TABLE `times` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-06-18 15:49:41
