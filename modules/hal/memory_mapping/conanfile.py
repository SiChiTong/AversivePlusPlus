from conans import ConanFile, CMake

class AversivePlusPlusModuleConan(ConanFile):
    name = "memory_mapping"
    version = "0.1"
    exports = "*.hpp"
    requires = "base/0.1@AversivePlusPlus/dev"

    def package(self):
        self.copy("*.hpp", src="include", dst="include")
