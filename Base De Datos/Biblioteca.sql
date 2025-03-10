Use biblioteca;

-- Crear tabla Cliente
CREATE TABLE Cliente(
    IdCliente INT PRIMARY KEY,
    Nombre VARCHAR(100),
    ApellidoP VARCHAR(100),
    ApellidoM VARCHAR(100),
    telefono VARCHAR(100),
    celular BIGINT,
    EMAIL VARCHAR(100) UNIQUE
);

-- Crear tabla Editorial
CREATE TABLE Editorial (
    IdEditorial INT PRIMARY KEY,
    Nombre VARCHAR(100),
    telefono VARCHAR(100),
    Direccion VARCHAR(100),
    Email VARCHAR(100) UNIQUE,
    Ciudad VARCHAR(100)
);

-- Crear tabla Autor
CREATE TABLE Autor (
    IdAutor INT PRIMARY KEY,
    Nombre VARCHAR(100),
    Apellido VARCHAR(100),
    FechaNacimiento DATE,
    Nacionalidad VARCHAR(100),
    Email VARCHAR(100),
    SitioWeb VARCHAR(255)
);

-- Crear tabla Libro
CREATE TABLE Libro(
    IdLibro INT PRIMARY KEY,
    Titulo VARCHAR(100),
    Categoria VARCHAR(100),
    FechaPublicacion DATE,
    IdEditorial INT,
    IdAutor INT,  -- Agregar la columna IdAutor aquí
    FOREIGN KEY (IdEditorial) REFERENCES Editorial(IdEditorial),
    FOREIGN KEY (IdAutor) REFERENCES Autor(IdAutor)  -- Agregar la clave foránea aquí
);

-- Crear tabla Ejemplar
CREATE TABLE Ejemplar(
    IdEjemplar INT PRIMARY KEY,
    IdLibro INT,
    Estado VARCHAR(100),
    FOREIGN KEY (IdLibro) REFERENCES Libro(IdLibro)
);

-- Crear tabla Reserva
CREATE TABLE Reserva(
    IdReserva INT PRIMARY KEY,
    IdEjemplar INT,
    IdCliente INT,
    FechaReserva DATE,
    FechaExpiracion DATE,
    FOREIGN KEY (IdEjemplar) REFERENCES Ejemplar(IdEjemplar),
    FOREIGN KEY (IdCliente) REFERENCES Cliente(IdCliente)
);

-- Crear tabla Prestamo
CREATE TABLE Prestamo(
    IdPrestamo INT PRIMARY KEY,
    IdEjemplar INT,
    IdCliente INT,
    FechaPrestamo DATE,
    FechaDevolucion DATE,
    FechaRealDevolucion DATE,
    EstadoDePrestamo VARCHAR(100),
    FOREIGN KEY (IdEjemplar) REFERENCES Ejemplar(IdEjemplar),
    FOREIGN KEY (IdCliente) REFERENCES Cliente(IdCliente)
);

-- Crear tabla Multa
CREATE TABLE Multa(
    IdMulta INT PRIMARY KEY,
    IdPrestamo INT,
    MontoMulta INT,
    FechaDeLaMulta DATE,
    EstadoDePago VARCHAR(100),
    FOREIGN KEY (IdPrestamo) REFERENCES Prestamo(IdPrestamo)
);
