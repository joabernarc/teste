//
// Created by Mihawk on 09/10/2018.
//

#ifndef CLASSESTWITTER_FEED_H
#define CLASSESTWITTER_FEED_H
#include <iostream>

class Feed {
private:
    std::string idUsuario;
public:
    const std::string &getIdUsuario() const;

    void setIdUsuario(const std::string &idUsuario);

    Feed(const std::string &idUsuario);
};


#endif //CLASSESTWITTER_FEED_H
