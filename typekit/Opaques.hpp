/* Generated from orogen/lib/orogen/templates/typekit/Opaques.hpp */

#ifndef __OROGEN_GENERATED_envire_maps_USER_MARSHALLING_HH
#define __OROGEN_GENERATED_envire_maps_USER_MARSHALLING_HH

#include <envire_maps/typekit/OpaqueFwd.hpp>

namespace orogen_typekits
{
    
    /** Converts \c real_type into \c intermediate */
    void toIntermediate(::wrappers::Index& intermediate, ::maps::grid::Index const& real_type);
    /** Converts \c intermediate into \c real_type */
    void fromIntermediate(::maps::grid::Index& real_type, ::wrappers::Index const& intermediate);
        
    
}

#endif

