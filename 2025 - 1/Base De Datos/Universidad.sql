use Universidad;




CREATE TABLE Estudiante(
	IdEstudiante INT PRIMARY KEY IDENTITY(1,1),
	Nombre VARCHAR(100),
	ApellidoPaterno VARCHAR(100),
	ApellidoMaterno VARCHAR (100),
	Celular VARCHAR (50),
	Nacionalidad VARCHAR(50),
	Direccion VARCHAR (50)
);

CREATE TABLE Departamento(
	IdDepartamento INT PRIMARY KEY IDENTITY(1,1),
	Nombre VARCHAR(100),
	Ubicación VARCHAR(100),
	JefedeDepartamento VARCHAR (100),
	Email VARCHAR(100),
	Celular VARCHAR(100)
);

ALTER TABLE Curso
ADD CONSTRAINT FK_Curso_Docente FOREIGN KEY (IdDocente) REFERENCES Docente(IdDocente);

SELECT * FROM Curso


CREATE TABLE Docente(
	IdDocente INT PRIMARY KEY IDENTITY(1,1),
	IdDepartamento INT,
	FOREIGN KEY (IdDepartamento) REFERENCES Departamento(IdDepartamento),
	Nombre VARCHAR (100),
	ApellidoPaterno VARCHAR(100),
	ApellidoMaterno VARCHAR (100),
	Especialidad VARCHAR(100),
	Celular VARCHAR (50),
	Direccion VARCHAR (50)
);

--Agregar llave foranea de curso después con UNIQUE
CREATE TABLE Asignatura(
	IdAsignatura INT PRIMARY KEY IDENTITY(1,1),
	Nombre VARCHAR(100),
	Creditos INT,
	Duración Decimal(10,2)
);

CREATE TABLE Curso(
	IdCurso INT PRIMARY KEY IDENTITY(1,1),
	Nombre VARCHAR (100)
);

DROP TABLE Curso

CREATE TABLE Evaluación (
    IdEvaluación INT PRIMARY KEY IDENTITY,
    Nombre_Evaluación VARCHAR(100) NOT NULL,
    Fecha DATE,
    IdCurso INT,
    FOREIGN KEY (IdCurso) REFERENCES Curso(IdCurso)
);

CREATE TABLE Aula (
    IdAula INT PRIMARY KEY IDENTITY(1,1),
    NombreAula VARCHAR(100),
    Capacidad INT,
    IdCurso INT,
    FOREIGN KEY (IdCurso) REFERENCES Curso(IdCurso)
);

DROP TABLE Aula
USE Universidad
select * from Curso

CREATE TABLE Horario (
    IdHorario INT PRIMARY KEY IDENTITY(1,1),
    Día VARCHAR(20),
    Hora_Inicio TIME,
    Hora_Fin TIME,
    IdCurso INT,
    FOREIGN KEY (IdCurso) REFERENCES Curso(IdCurso)
);

CREATE TABLE PlanDePago (
	IdPlanDePago INT PRIMARY KEY IDENTITY(1,1),
	IdEstudiante INT,
    FOREIGN KEY (IdEstudiante) REFERENCES Estudiante(IdEstudiante)
);

CREATE TABLE Matriculación (
    IdEstudiante INT,
    IdCurso INT,
    PRIMARY KEY (IdEstudiante, IdCurso),
    FOREIGN KEY (IdEstudiante) REFERENCES Estudiante(IdEstudiante),
    FOREIGN KEY (IdCurso) REFERENCES Curso(IdCurso)
);

CREATE TABLE Imparte (
    IdDocente INT,
    IdCurso INT,
    PRIMARY KEY (IdCurso, IdCurso),
    FOREIGN KEY (IdEstudiante) REFERENCES Estudiante(IdEstudiante),
    FOREIGN KEY (IdCurso) REFERENCES Curso(IdCurso)
);


SELECT 
    OBJECT_NAME(object_id) AS ConstraintName
FROM 
    sys.objects
WHERE 
    type_desc LIKE '%CONSTRAINT' AND 
    OBJECT_NAME(parent_object_id) = 'Curso';

alter TABLE Curso ADD IdDepartamento INT;


select * from Curso

ALTER TABLE Departamento
ADD CONSTRAINT FK_Departamento_Estudiante FOREIGN KEY (IdEstudiante) REFERENCES Estudiante(IdEstudiante);


Alter Table Departamento
ADD IdEstudiante INT;






);