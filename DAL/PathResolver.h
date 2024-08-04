#ifndef _PathResolver_H
#define _PathResolver_H

#include <string>
#include <fstream>
#include <iostream>

static std::string defaultServerPath;
static std::string defaultLocalPath;
static std::string defaultConfigPath;
static std::string wrapper;
static std::string nameLocal;
static std::string nameServer;

class PathResolver 
{
private:
    PathResolver();
    ~PathResolver();
    static PathResolver* _PathResolver;
    std::string _serverPath;
    std::string _localPath;
public:
    PathResolver(const PathResolver &other) = delete;
    void operator=(const PathResolver &other) = delete;

    //==Tra ve doi tuong DALManager==//
    static PathResolver* GetInstance();
    static void DestroyInstance();

    //==Getter==//
    std::string getLocalPath();
    std::string getServerPath();

    //==Setter==//
    int8_t setLocalPath(const std::string& localPath);
    int8_t setServerPath(const std::string& serverPath);

    //==Loader==//
    std::ifstream& reader(std::ifstream& inp);
    int8_t load();
    int8_t load(const std::string& path);
};
#endif