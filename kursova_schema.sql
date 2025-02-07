-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Хост: 127.0.0.1
-- Час створення: Лис 06 2024 р., 17:24
-- Версія сервера: 8.0.40
-- Версія PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- База даних: `kursova_schema`
--

--
-- Дамп даних таблиці `family_relations`
--

INSERT INTO `family_relations` (`id`, `vpo`, `relation_name`, `relation_type`, `relation_document`) VALUES
(2, 1, 0x31, 0x31, 0x31);

--
-- Дамп даних таблиці `managers`
--

INSERT INTO `managers` (`id`, `full_name`, `user_id`) VALUES
(2, 0x3132, 3);

--
-- Дамп даних таблиці `relocations`
--

INSERT INTO `relocations` (`id`, `vpo_id`, `relocation_date`, `relocation_region`, `relocation_address`, `assistance`, `employment`, `status`, `manager_id`) VALUES
(2, 2, '2024-11-05', 0x313132, 0x313132, 0x313132, 0x313132, 0xc4eeefeeeceee3e020ede0e4e0ede0, 2);

--
-- Дамп даних таблиці `users`
--

INSERT INTO `users` (`id`, `login`, `password`) VALUES
(2, 0xe2b3f2e0ebb3e9, 0x313131),
(3, 0x6d616e61676572, 0x313131),
(4, 0x61646d696e, 0x313131);

--
-- Дамп даних таблиці `vpo`
--

INSERT INTO `vpo` (`id`, `last_name`, `first_name`, `middle_name`, `birth_date`, `gender`, `rnokpp`, `document_number`, `region`, `registration_address`) VALUES
(1, 0xb2e2e0ede5edeaee, 0xb2e2e0ed, 0xb2e2e0edeee2e8f7, '1990-01-01', 0xd7eeebeee2b3f7e0, 0x31323334353637383930, 0x4142313233343536, 0xcae8bfe2f1fceae0, 0xe2f3eb2e20d8e5e2f7e5edeae02c2031),
(2, 0xcfe5f2f0e5edeaee, 0xcfe5f2f0ee20, 0xcfe5f2f0eee2e8f7, '1985-05-10', 0xd7eeebeee2b3f7e0, 0x30393837363534333231, 0x4344323334353637, 0xcbfce2b3e2f1fceae0, 0xe2f3eb2e20d4f0e0edeae02c203135);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
