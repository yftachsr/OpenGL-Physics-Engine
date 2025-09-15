#ifndef EBO_H
#define EBO_H

#include<glad/glad.h>
#include<iostream>


class EBO {
public:
	GLuint id;

	EBO(GLuint*, GLsizeiptr);

	void bind();
	void unbind();

	~EBO();

};

#endif // !EBO_CLASS

