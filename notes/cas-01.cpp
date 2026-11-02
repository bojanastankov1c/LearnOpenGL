//
// Created by bojana on 02/11/2026.
//

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

using namespace std;

int main () {
    if (!glfwInit()) {
        cerr << "glfwInit failed";
        return -1;
    }

    GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", nullptr, nullptr);

    if (window == nullptr) {
        cerr << "glfwCreateWindow failed";
        return -1;
    }

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
            glfwSetWindowShouldClose(window, true);
        }

        glfwSwapBuffers(window);
    }

    glfwTerminate();
}