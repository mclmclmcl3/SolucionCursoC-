#pragma once

#include <iostream>

/// <summary>
/// Esta clase tiene l� �nica funcion de crer una estrucutra de
/// datos gestionendo las propiedaes que se han considerado para
/// el ejemplo
/// </summary>
/// 
class Libro {
private:
    int id;
    std::string titulo;
    std::string autor;
    double precio;

public:
    // Constructor vac�o para cuando elijo un libro.
    Libro() {}

    // Inicializar el Constructor (No a�ado el Id, ya que es autoincremento) para nuevos
    Libro(const int _id, const std::string& _titulo, const std::string& _autor, double _precio)
    {
        id = _id;
        titulo = _titulo;
        autor = _autor;
        precio = _precio;
    }

    // Getter
    int GetId() const { return id; }
    std::string GetTitulo() const { return titulo; }
    std::string GetAutor() const { return autor; }
    double GetPrecio() const { return precio; }

    // Setter
    void SetId(int _id) { id = _id; }
    void SetTitulo(const std::string& _titulo) { titulo = _titulo; }
    void SetAutor(const std::string& _autor) { autor = _autor; }
    void SetPrecio(double _precio) { precio = _precio; }

    // este operador es para las busquedas, en otros lenguajes equivale
    // a equal
    bool operator==(const Libro& otroLibro) const {
        return this->id == otroLibro.id;
    }
};


