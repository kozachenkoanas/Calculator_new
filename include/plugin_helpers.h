#pragma once
#include "plugin_api.h"

#define DEFINE_PLUGIN(plugin_name, plugin_arity, plugin_func) \
    extern "C" { \
        static const PluginDescriptor desc = { plugin_name, plugin_arity, plugin_func }; \
        PLUGIN_API const PluginDescriptor* GetPluginDescriptor() { return &desc; } \
    }