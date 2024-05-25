CREATE DATABASE IF NOT EXISTS management;
USE management;

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

-- ----------------------------
-- Table structure for useraccounts
-- ----------------------------
DROP TABLE IF EXISTS `accounts`;
CREATE TABLE `accounts` (
  `id` int NOT NULL AUTO_INCREMENT,
  `username` varchar(45) NOT NULL,
  `password` varchar(45) NOT NULL,
  `phone` varchar(45) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username_UNIQUE` (`username`),
  UNIQUE KEY `idAccounts_UNIQUE` (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=9 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `accounts`
--
BEGIN;
INSERT INTO `accounts` VALUES (1,'Rita','1234','15800000000'),(2,'Zhaomin','4321','12312132232'),(3,'Max','00000','19098080232'),(4,'Stella','ww','13700000000'),(5,'Claire','5678','12345678910'),(6,'Austin','1111','12345678910'),(7,'Bella','1212','12345678910'),(8,'Jason','9999','1232435435');
COMMIT;

--
-- Table structure for table `items`
--

DROP TABLE IF EXISTS `items`;
CREATE TABLE `items` (
  `id_item` int NOT NULL AUTO_INCREMENT,
  `item_name` varchar(45) NOT NULL,
  `price` varchar(45) NOT NULL,
  `image` varchar(45) NOT NULL,
  `description` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`id_item`),
  UNIQUE KEY `idItems_UNIQUE` (`id_item`)
) ENGINE=InnoDB AUTO_INCREMENT=13 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `items`
--

BEGIN;
INSERT INTO `items` VALUES (1,'Cappuccino','2.85','Cappuccino.jpg',''),(2,'Caramel Macchiato','3.5','CaramelMacchiato.jpg',''),(9,'Vinilla Latte','3.00','VanillaLatte.jpg',''),(12,'Hot Chocolate','1.99','HotChocolate.jpg','');
COMMIT;



--
-- Table structure for table `ordered_items`
--

DROP TABLE IF EXISTS `ordered_items`;
CREATE TABLE `ordered_items` (
  `idordered_items` int NOT NULL AUTO_INCREMENT,
  `code` varchar(45) NOT NULL,
  `customer` varchar(45) NOT NULL,
  `date` varchar(45) NOT NULL,
  `time` varchar(45) NOT NULL,
  `item` varchar(45) NOT NULL,
  `quantity` varchar(45) NOT NULL,
  `price` varchar(45) NOT NULL,
  `status` varchar(45) NOT NULL,
  PRIMARY KEY (`idordered_items`),
  UNIQUE KEY `idordered_items_UNIQUE` (`idordered_items`)
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `ordered_items`
--

BEGIN;
INSERT INTO `ordered_items` VALUES (1,'00019','Rita','2024/04/29','23:08:12','Cappuccino','1','$ 2.85',''),(2,'00019','Rita','2024/04/29','23:08:12','Caramel Macchiato','2','$ 3.5',''),(3,'00020','Rita','2024/04/30','22:04:41','Cappuccino','3','$ 2.85',''),(4,'00020','Rita','2024/04/30','22:04:41','Caramel Macchiato','1','$ 3.5',''),(5,'00021','Rita','2024/04/30','22:18:28','Cappuccino','2','$ 2.85',''),(6,'00021','Rita','2024/04/30','22:18:28','Caramel Macchiato','3','$ 3.5',''),(7,'00022','Zhaomin','2024/05/01','14:51:03','Cappuccino','2','$ 2.85',''),(8,'00023','Zhaomin','2024/05/02','19:43:53','Cappuccino','2','$ 2.85',''),(9,'00023','Zhaomin','2024/05/02','19:43:53','Caramel Macchiato','7','$ 3.5','');
COMMIT;

DROP TABLE IF EXISTS `orders`;
CREATE TABLE `orders` (
  `idorders` int NOT NULL AUTO_INCREMENT,
  `code` varchar(45) NOT NULL,
  `customer` varchar(45) NOT NULL,
  `date` varchar(45) NOT NULL,
  `time` varchar(45) NOT NULL,
  `item_number` varchar(45) NOT NULL,
  `total_price` varchar(45) NOT NULL,
  `status` varchar(45) NOT NULL,
  `time_ready` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idorders`),
  UNIQUE KEY `idorders_UNIQUE` (`idorders`),
  UNIQUE KEY `code_UNIQUE` (`code`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `orders`
--

BEGIN;
INSERT INTO `orders` VALUES (1,'00021','Rita','2024/04/30','22:18:28','2','$ 16.2','ready','19:50:40'),(2,'00022','Zhaomin','2024/05/01','14:51:03','1','$ 5.7','ready','15:44:40'),(3,'00023','Zhaomin','2024/05/02','19:43:53','2','$ 30.2','preparing',NULL);
COMMIT;

--
-- Table structure for table `staff`
--

DROP TABLE IF EXISTS `staff`;
CREATE TABLE `staff` (
  `idstaff` int NOT NULL AUTO_INCREMENT,
  `staff_id` varchar(45) NOT NULL,
  `staff_name` varchar(45) NOT NULL,
  `password` varchar(45) NOT NULL,
  `status` varchar(45) NOT NULL,
  PRIMARY KEY (`idstaff`),
  UNIQUE KEY `idstaff_UNIQUE` (`idstaff`),
  UNIQUE KEY `staff_id_UNIQUE` (`staff_id`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `staff`
--

BEGIN;
INSERT INTO `staff` VALUES (1,'0080','Lanruo','1234','resting'),(2,'0387','Zhaomin','4321','resting');
COMMIT;

--
-- Table structure for table `system`
--

DROP TABLE IF EXISTS `system`;
CREATE TABLE `system` (
  `idsystem` int NOT NULL AUTO_INCREMENT,
  `system_mode` varchar(45) NOT NULL,
  `current_code` varchar(45) NOT NULL,
  `starting_code` varchar(45) NOT NULL,
  PRIMARY KEY (`idsystem`),
  UNIQUE KEY `idsystem_UNIQUE` (`idsystem`),
  UNIQUE KEY `system_mode_UNIQUE` (`system_mode`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Dumping data for table `system`
--

BEGIN;
INSERT INTO `system` VALUES (1,'test','00023','00000');
COMMIT;

--
-- Dumping events for database 'management'
--

--
-- Dumping routines for database 'management'
--
SET FOREIGN_KEY_CHECKS = 1;

SET FOREIGN_KEY_CHECKS = 1;
