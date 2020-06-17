#ifndef PREFIXSUFFIXPLUGIN_H
#define PREFIXSUFFIXPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class PrefixSuffixPlugin : public Plugin
{
public: 
 std::string toString() {return "PrefixSuffix";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
