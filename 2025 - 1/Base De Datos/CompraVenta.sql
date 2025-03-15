select * from Categoria

SELECT COLUMN_NAME, DATA_TYPE
FROM INFORMATION_SCHEMA.COLUMNS
WHERE TABLE_NAME = 'Libro';


INSERT INTO Libro (Titulo, FechaPublicacion, Idioma, ISBN, A�oPublicacion, IdCategoria, IdProveedor)
VALUES 
('Cien a�os de soledad', '1967-06-05', 'Espa�ol', '978-3-16-148410-0', 1967, 1, 1),
('El amor en los tiempos del c�lera', '1985-03-14', 'Espa�ol', '978-3-16-148411-7', 1985, 1, 2),
('La casa de los esp�ritus', '1982-03-01', 'Espa�ol', '978-3-16-148412-4', 1982, 1, 3),
('Harry Potter y la piedra filosofal', '1997-06-26', 'Espa�ol', '978-0-7475-3269-9', 1997, 2, 4),
('Orgullo y prejuicio', '1813-01-28', 'Ingl�s', '978-0-14-143951-8', 1813, 1, 5),
('1984', '1949-06-08', 'Ingl�s', '978-0-452-28423-4', 1949, 1, 6),
('La tregua', '1960-03-01', 'Espa�ol', '978-3-16-148413-1', 1960, 1, 7),
('El alquimista', '1988-11-11', 'Espa�ol', '978-0-06-231500-7', 1988, 1, 8),
('Cr�nica de una muerte anunciada', '1981-06-06', 'Espa�ol', '978-3-16-148414-8', 1981, 1, 9),
('El se�or de los anillos', '1954-07-29', 'Ingl�s', '978-0-261-10336-8', 1954, 2, 10);
