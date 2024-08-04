#include "PathResolver.h"

PathResolver* PathResolver::_PathResolver = nullptr;

PathResolver::PathResolver() 
{
    defaultServerPath = "Database/Server/";
    defaultLocalPath = "Database/Local/";
    defaultConfigPath = "config.txt";
    wrapper = "\"";
    nameLocal = "LocalPath";
    nameServer = "ServerPath";

    this->_localPath = defaultLocalPath;
    this->_serverPath = defaultServerPath;
}

PathResolver::~PathResolver()
{

}

PathResolver* PathResolver::GetInstance()
{
    if (PathResolver::_PathResolver == nullptr) {
        _PathResolver = new PathResolver();
    }
    
    return _PathResolver;
}

void PathResolver::DestroyInstance() {
    delete PathResolver::_PathResolver;
    PathResolver::_PathResolver = nullptr;
}

std::string PathResolver::getLocalPath()
{
    return this->_localPath;
}

std::string PathResolver::getServerPath()
{
    return this->_serverPath;
}

int8_t PathResolver::setLocalPath(const std::string& localPath)
{
    this->_localPath = localPath;
    return 1;
}

int8_t PathResolver::setServerPath(const std::string& serverPath)
{
    this->_serverPath = serverPath;
    return 1;
}

std::ifstream& PathResolver::reader(std::ifstream& inp)
{
    std::string rawdata;
    while(getline(inp, rawdata)) {
        size_t p1 = rawdata.find(wrapper);
        size_t p2 = rawdata.find(wrapper, p1 + wrapper.length());
        size_t p3 = rawdata.find(wrapper, p2 + wrapper.length());
        size_t p4 = rawdata.find(wrapper, p3 + wrapper.length());

        std::string name = rawdata.substr(p1 + wrapper.length(), p2 - p1 - wrapper.length());
        std::string value = rawdata.substr(p3 + wrapper.length(), p4 - p3 - wrapper.length());

        if (name == nameLocal)
            this->setLocalPath(value);

        if (name == nameServer)
            this->setServerPath(value);
    }
    return inp;
}

int8_t PathResolver::load()
{
    std::ifstream inp(defaultConfigPath); 
    if (!inp) 
        return 0;

    this->reader(inp);
        
    inp.close();
    return 1;
}

int8_t PathResolver::load(const std::string& path)
{
    std::ifstream inp(path); 
    if (!inp) 
        return 0;

    this->reader(inp);
 
    inp.close();
    return 1;
}