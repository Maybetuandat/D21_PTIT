use testbtl;
CREATE TABLE `testbtl`.`thongke` (
  `idthongke` INT NOT NULL,
  `LuotXem` INT NULL,
  `TaiKhoanMoi` INT NULL,
  `BaiThiMoi` INT NULL,
  `SoLanLamBaiTheoThang` INT NULL,
  `Nam` INT NULL,
  `Thang` INT NULL,
  PRIMARY KEY (`idthongke`));


INSERT INSERT INTO ThongKe (idthongke, LuotXem, TaiKhoanMoi, BaiThiMoi, SoLanLamBaiTheoThang, Nam, Thang)
VALUES
(1, 1000, 50, 20, 10, 2024, 1),
(2, 1500, 70, 30, 15, 2024, 2),
(3, 1200, 60, 25, 12, 2024, 3),
(4, 1800, 80, 35, 18, 2024, 4),
(5, 2000, 90, 40, 20, 2024, 5),
(6, 2500, 100, 45, 25, 2024, 6),
(7, 3000, 120, 50, 30, 2024, 7),
(8, 2800, 110, 48, 28, 2024, 8),
(9, 3200, 130, 55, 32, 2024, 9),
(10, 3500, 150, 60, 35, 2024, 10),
(11, 4000, 170, 65, 40, 2024, 11),
(12, 4500, 190, 70, 45, 2024, 12);


