#include "MLTraversabilityMapProvider.hpp"

INSTANCIATE_TYPE(envire::core::SpatioTemporal<maps::grid::TraversabilityBaseMap3d>)

namespace init 
{

MLTraversabilityMapProvider::MLTraversabilityMapProvider(const std::string& name): Base(name)
{

}

MLTraversabilityMapProvider::~MLTraversabilityMapProvider()
{

}

    
}
