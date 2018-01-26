#include "MLSProvider.hpp"

INSTANCIATE_TYPE(envire::core::SpatioTemporal<maps::grid::MLSMapKalman >)
INSTANCIATE_TYPE(envire::core::SpatioTemporal<maps::grid::MLSMapSloped >)
INSTANCIATE_TYPE(envire::core::SpatioTemporal<maps::grid::MLSMapPrecalculated >)


namespace init {
    
MLSProvider::MLSProvider(const std::string& name) : Base(name)
{

}

MLSProvider::~MLSProvider()
{

}

MLSPrecalculatedProvider::MLSPrecalculatedProvider(const std::string& name): Base(name)
{

}

MLSPrecalculatedProvider::~MLSPrecalculatedProvider()
{

}

MLSSlopedProvider::MLSSlopedProvider(const std::string& name): Base(name)
{

}

MLSSlopedProvider::~MLSSlopedProvider()
{

}



}