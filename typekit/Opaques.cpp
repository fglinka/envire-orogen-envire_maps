/* Generated from orogen/lib/orogen/templates/typekit/Opaques.cpp */

#include <envire_maps/typekit/OpaqueTypes.hpp>
#include <envire_maps/typekit/Opaques.hpp>

    /** Returns the intermediate value that is contained in \c real_type */
    /** Stores \c intermediate into \c real_type. \c intermediate is owned by \c
     * real_type afterwards. */
    /** Release ownership of \c real_type on the corresponding intermediate
     * pointer.
     */


void orogen_typekits::toIntermediate(::wrappers::Index& intermediate, ::maps::grid::Index const& real_type)
{
    intermediate.x = real_type(0, 0);
    intermediate.y = real_type(0, 1);
}

void orogen_typekits::fromIntermediate(::maps::grid::Index& real_type, ::wrappers::Index const& intermediate)
{
    real_type(0, 0) = intermediate.x;
    real_type(0, 1) = intermediate.y;
}

