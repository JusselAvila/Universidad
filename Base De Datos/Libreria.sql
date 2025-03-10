use libreria

Create table Cliente(
IdCliente int Primary key,
Nombre Varchar(100),
ApellidoP Varchar(100),
ApellidoM Varchar(100),
telefono varchar(100),
celular bigint,
EMAIL Varchar(100) UNIQUE
);

CREATE TABLE Editorial (
    IdEditorial INT PRIMARY KEY,
    Nombre VARCHAR(100),
	telefono VARCHAR(100),
	Direccion VARCHAR(100),
	Email Varchar(100) UNIQUE,
	Ciudad Varchar(100)
);

CREATE TABLE Libro(

IdLibro int Primary key,
Autor Varchar(100),
Titulo Varchar(100),
Categoria Varchar(100),
FechaPublicacion DATE,
IdEditorial int FOREIGN KEY REFERENCES Editorial(IdEditorial)
);

CREATE TABLE Ejemplar(
IdEjemplar int Primary Key,
IdLibro INT FOREIGN KEY REFERENCES Libro(IdLibro),
Estado Varchar(100)
);

CREATE TABLE Reserva(
IdReserva int Primary Key,
IdEjemplar INT FOREIGN KEY REFERENCES Ejemplar(IdEjemplar),
IdCliente INT FOREIGN KEY REFERENCES Cliente(IdCliente),
FechaReserva Date,
FechaExpiracion Date
);

CREATE TABLE Prestamo(
IdPrestamo int primary key,
IdEjemplar INT FOREIGN KEY REFERENCES Ejemplar(IdEjemplar),
IdCliente INT FOREIGN KEY REFERENCES Cliente(IdCliente),
FechaPrestamo Date,
fechaDevolucion Date,
FechaRealDevolucion Date,
EstadoDePrestamo Varchar(100)
);

CREATE TABLE Multa(
IdMulta int primary key,
IdPrestamo INT FOREIGN KEY REFERENCES Prestamo(IdPrestamo),
MontoMulta INT,
FechaDeLaMulta Date,
EstadoDePago Varchar(100)
);	

CREATE TABLE Autores (
    IdAutor INT PRIMARY KEY,
    Nombre VARCHAR(100),
    Apellido VARCHAR(100),
    FechaNacimiento DATE,
    Nacionalidad VARCHAR(100),
    Email VARCHAR(100),
    SitioWeb VARCHAR(255),
);

INSERT INTO Cliente(IdCliente, Nombre, telefono)
VALUES(1, 'Javier Torrico', '69261574');

INSERT INTO Editorial(IdEditorial, Nombre, Ciudad)
VALUES(20, 'EditoriaAurrera', 'Cochabamba');

INSERT INTO Libro(IdLibro, Titulo, Categoria)
VALUES(3, 'Sinsajo', 'Ficcion Adulto Joven');

INSERT INTO Ejemplar(IdEjemplar, IdLibro, Estado)
VALUES(1, 3, 'Disponible');

INSERT INTO Reserva(IdReserva, IdEjemplar, IdCliente)
VALUES(5, 1, 1);

INSERT INTO Prestamo(IdPrestamo, FechaPrestamo, fechaDevolucion)
VALUES(500, '2025-02-08', '2025-02-15');

INSERT INTO Multa(IdMulta, IdPrestamo, MontoMulta)
Values(1000, 500, 50);

select *From ;

ALTER TABLE Libro
alter column autores