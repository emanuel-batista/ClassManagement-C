# Student Management System

This is a simple student management system implemented in C. It allows you to add students to different semesters and assign grades to them for different subjects.

## Structures

The program uses the following structures:

- `aluno`: Represents a student with fields for name, email, grades for 9 subjects, and the semester they are enrolled in.
- `turma`: Represents a class of students for a particular course. It contains an array of `aluno` and a field for the course name.

There are two instances of `turma`, `turma` and `turma2`, representing two different semesters.

## Functions

- `adicionarAluno`: Adds a student to `turma`. It asks for the student's name, email, and grades for different subjects.
- `adicionarAluno2`: Adds a student to `turma2`. It asks for the student's name, email, and grades for different subjects.

## How to Use

When you run the program, it will display a menu with two options:

1. Add a student
2. End the program

If you choose to add a student, it will ask for the semester the student is enrolled in (1 or 2). Depending on your input, it will add the student to `turma` or `turma2`.

For each student, you can enter their name, email, and grades for different subjects. You can enter grades for as many subjects as you want.

## Note

This is a simple program and does not include any data persistence. All data will be lost when the program ends.
