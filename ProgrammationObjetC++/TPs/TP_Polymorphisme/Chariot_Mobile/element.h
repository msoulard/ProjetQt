#ifndef ELEMENT_H
#define ELEMENT_H

/**
  @file element.h
 * @brief The Element class
 * @details Déclartion de la classe de base et classe abstraite Element
 * @author Maëva Soulard
 * @date 15/10/2020
 */

class Element
{
public:
    Element();
    virtual ~Element();
    virtual void Afficher() = 0;
};

#endif // ELEMENT_H
