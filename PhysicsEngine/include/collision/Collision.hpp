
#pragma once

#include "CollisionBody.hpp"

namespace stw
{
/**
* \brief Struct representing a collision.
*/
struct Collision
{
    /**
     * \brief Body A of the collision.
     */
    CollisionBody* bodyA{};

    /**
     * \brief Body B of the collision.
     */
    CollisionBody* bodyB{};

    /**
     * \brief Manifold of the collision.
     */
    Manifold manifold;
};
}
