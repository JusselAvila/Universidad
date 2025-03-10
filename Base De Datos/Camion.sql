use Camion;

CREATE TABLE Camionero(
	IdCamionero INT PRIMARY KEY,
	Nombre VARCHAR(50),
	Telefono VARCHAR(20),
	Direccion VARCHAR(100),
	Salario DECIMAL(10, 2),
	Poblacion VARCHAR(50)
);

CREATE TABLE Camiones(
	IdCamiones INT PRIMARY KEY,
	Matricula VARCHAR(20),
	Modelo VARCHAR(30),
	tipo VARCHAR(20),
	Potencia VARCHAR(30)
);

--RELACION DE MUCHAS A MUCHAS

CREATE TABLE Conducir(
	IdCamionero INT,
	IdCamiones INT,
	PRIMARY KEY(IdCamionero, IdCamiones),
	FOREIGN KEY(IdCamionero) REFERENCES Camionero(IdCamionero),
	FOREIGN KEY(IdCamiones) REFERENCES Camiones(IdCamiones)
);



CREATE TABLE Provincia(
	IdProvincia INT PRIMARY KEY,
	CodigoProvincia VARCHAR(20),
	Nombre VARCHAR(40)
);

CREATE TABLE Paquete(
	IdProvincia INT,
	IdCamionero INT,
	IdPaquete INT PRIMARY KEY,
	Codigo VARCHAR(30),
	Descripcion VARCHAR(50),
	Destinario VARCHAR(50),
	Direccion VARCHAR(50),
    FOREIGN KEY (IdProvincia) REFERENCES Provincia(IdProvincia), 
	FOREIGN KEY (IdCamionero) REFERENCES Camionero(IdCamionero)
);

