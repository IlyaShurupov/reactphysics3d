/********************************************************************************
* ReactPhysics3D physics library, http://code.google.com/p/reactphysics3d/      *
* Copyright (c) 2010 Daniel Chappuis                                            *
*********************************************************************************
*                                                                               *
* Permission is hereby granted, free of charge, to any person obtaining a copy  *
* of this software and associated documentation files (the "Software"), to deal *
* in the Software without restriction, including without limitation the rights  *
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell     *
* copies of the Software, and to permit persons to whom the Software is         *
* furnished to do so, subject to the following conditions:                      *
*                                                                               *
* The above copyright notice and this permission notice shall be included in    *
* all copies or substantial portions of the Software.                           *
*                                                                               *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR    *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,      *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE   *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER        *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, *
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN     *
* THE SOFTWARE.                                                                 *
********************************************************************************/

#ifndef CONTACTINFO_H
#define	CONTACTINFO_H

// Libraries
#include "../body/OBB.h"
#include "../mathematics/mathematics.h"

// ReactPhysics3D namespace
namespace reactphysics3d {

/*  -------------------------------------------------------------------
    Structure ContactInfo :
       This structure contains informations about a collision contact
       computed durring the narow phase collision detection. Those
       informations are use to compute the contact set for a contact
       between two bodies.
    -------------------------------------------------------------------
*/
struct ContactInfo {
    public:
        // TODO : Use polymorphism here (change OBB into BoundingVolume to be more general)
        const OBB* const obb1;                   // Body pointer of the first bounding volume
        const OBB* const obb2;                   // Body pointer of the second bounding volume
        const Vector3D normal;                   // Normal vector the the collision contact
        const double penetrationDepth;           // Penetration depth of the contact
        
        ContactInfo(const OBB* const obb1, const OBB* const obb2, const Vector3D& normal, double penetrationDepth);                                                                // Constructor
};

} // End of the ReactPhysics3D namespace

#endif

