//
// Created by cpasjuste on 29/05/18.
//

#ifndef PGEN_CONFIG_H
#define PGEN_CONFIG_H

#include "skeleton/pemu_config.h"
#include "osd.h"

class PGENConfig : public pemu::PEMUConfig {
public:
    PGENConfig(c2d::Io *io, int version);

    std::vector<int> getCoreHiddenOptionToEnable() override {
        return {PEMUConfig::OptId::UI_FILTER_SYSTEM};
    }

    std::string getCoreVersion() override {
        return VERSION;
    }

    std::vector<std::string> getCoreSupportedExt() override {
        return {".zip", ".ZIP", ".md", ".MD", ".smd", ".smd", ".gen", ".GEN", ".bin", ".BIN",
                ".mdx", ".MDX", ".sms", ".SMS", ".gg", ".GG", ".sg", ".SG", ".68k", ".68K"};
    }
};

#endif //PGEN_CONFIG_H
