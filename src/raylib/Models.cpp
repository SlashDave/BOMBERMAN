/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Models
*/

#include "../../inc/raylib/Models.hpp"
#include "../../inc/base.hpp"

using namespace Raylib;

Models::Models() {}

Models::~Models() {}

// Basic geometric 3D shapes drawing functions
void Models::drawLine3D(Vector3 startPos, Vector3 endPos, Color color)
{
    DrawLine3D(startPos, endPos, color);
} // Draw a line in 3D world space
void Models::drawPoint3D(Vector3 position, Color color)
{
    DrawPoint3D(position, color);
} // Draw a point in 3D space, actually a small line
void Models::drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)
{
    DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
} // Draw a circle in 3D world space
void Models::drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)
{
    DrawTriangle3D(v1, v2, v3, color);
} // Draw a color-filled triangle (vertex in counter-clockwise order!)
void Models::drawTriangleStrip3D(Vector3 *points, int pointsCount, Color color)
{
    DrawTriangleStrip3D(points, pointsCount, color);
} // Draw a triangle strip defined by points
void Models::drawCube(Vector3 position, float width, float height, float length, Color color)
{
    DrawCube(position, width, height, length, color);
} // Draw cube
void Models::drawCubeV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeV(position, size, color);
} // Draw cube (Vector version)
void Models::drawCubeWires(Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeWires(position, width, height, length, color);
} // Draw cube wires
void Models::drawCubeWiresV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeWiresV(position, size, color);
} // Draw cube wires (Vector version)
void Models::drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeTexture(texture, position, width, height, length, color);
} // Draw cube textured
void Models::drawSphere(Vector3 centerPos, float radius, Color color)
{
    DrawSphere(centerPos, radius, color);
} // Draw sphere
void Models::drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereEx(centerPos, radius, rings, slices, color);
} // Draw sphere with extended parameters
void Models::drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereWires(centerPos, radius, rings, slices, color);
} // Draw sphere wires
void Models::drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
} // Draw a cylinder/cone
void Models::drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
} // Draw a cylinder/cone wires
void Models::drawPlane(Vector3 centerPos, Vector2 size, Color color)
{
    DrawPlane(centerPos, size, color);
} // Draw a plane XZ
void Models::drawRay(Ray ray, Color color)
{
    Models::drawRay(ray, color);
} // Draw a ray line
void Models::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
} // Draw a grid (centered at (0, 0, 0))
// Model loading/unloading functions
Model Models::loadModel(const char *fileName)
{
    return (LoadModel(fileName));
} // Load model from files (meshes and materials)
Model Models::loadModelFromMesh(Mesh mesh)
{
    return (LoadModelFromMesh(mesh));
} // Load model from generated mesh (default material)
void Models::unloadModel(Model model)
{
    Models::unloadModel(model);
} // Unload model (including meshes) from memory (RAM and/or VRAM)
void Models::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
} // Unload model (but not meshes) from memory (RAM and/or VRAM)
// Mesh loading/unloading functions
void Models::uploadMesh(Mesh *mesh, bool dynamic)
{
    UploadMesh(mesh, dynamic);
}
void Models::updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset)
{
    UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}
void Models::drawMesh(Mesh mesh, Material material, Matrix transform)
{
    DrawMesh(mesh, material, transform);
}
void Models::drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances)
{
    DrawMeshInstanced(mesh, material, transforms, instances);
}
void Models::unloadMesh(Mesh mesh)
{
    UnloadMesh(mesh);
}
bool Models::exportMesh(Mesh mesh, const char *fileName)
{
    return (ExportMesh(mesh, fileName));
}
Material *Models::loadMaterials(const char *fileName, int *materialCount)
{
    return (LoadMaterials(fileName, materialCount));
}
Material Models::loadMaterialDefault(void)
{
    return (LoadMaterialDefault());
}
void Models::unloadMaterial(Material material)
{
    UnloadMaterial(material);
}
void Models::setMaterialTexture(Material *material, int mapType, Texture2D texture)
{
    SetMaterialTexture(material, mapType, texture);
}
void Models::setModelMeshMaterial(Model *model, int meshId, int materialId)
{
    SetModelMeshMaterial(model, meshId, materialId);
}
ModelAnimation *Models::loadModelAnimations(const char *fileName, int *animsCount)
{
    return (LoadModelAnimations(fileName, animsCount));
}
void Models::updateModelAnimation(Model model, ModelAnimation anim, int frame)
{
    UpdateModelAnimation(model, anim, frame);
}
void Models::unloadModelAnimation(ModelAnimation anim)
{
    UnloadModelAnimation(anim);
}
void Models::unloadModelAnimations(ModelAnimation *animations, unsigned int count)
{
    UnloadModelAnimations(animations, count);
}
bool Models::isModelAnimationValid(Model model, ModelAnimation anim)
{
    return (IsModelAnimationValid(model, anim));
}
Mesh Models::genMeshPoly(int sides, float radius)
{
    return (GenMeshPoly(sides, radius));
}
Mesh Models::genMeshPlane(float width, float length, int resX, int resZ)
{
    return (GenMeshPlane(width, length, resX, resZ));
}
Mesh Models::genMeshCube(float width, float height, float length)
{
    return (GenMeshCube(width, height, length));
}
Mesh Models::genMeshSphere(float radius, int rings, int slices)
{
    return (GenMeshSphere(radius, rings, slices));
}
Mesh Models::genMeshHemiSphere(float radius, int rings, int slices)
{
    return (GenMeshHemiSphere(radius, rings, slices));
}
Mesh Models::genMeshCylinder(float radius, float height, int slices)
{
    return (GenMeshCylinder(radius, height, slices));
}
Mesh Models::genMeshTorus(float radius, float size, int radSeg, int sides)
{
    return (GenMeshTorus(radius, size, radSeg, sides));
}
Mesh Models::genMeshKnot(float radius, float size, int radSeg, int sides)
{
    return (GenMeshKnot(radius, size, radSeg, sides));
}
Mesh Models::genMeshHeightmap(Image heightmap, Vector3 size)
{
    return (GenMeshHeightmap(heightmap, size));
}
Mesh Models::genMeshCubicmap(Image cubicmap, Vector3 cubeSize)
{
    return (GenMeshCubicmap(cubicmap, cubeSize));
}
//Mesh manipulation functions
BoundingBox Models::getmeshBoundingBox(Mesh mesh)
{
    return (GetMeshBoundingBox(mesh));

} // Compute mesh bounding box limits
void Models::meshTangents(Mesh *mesh)
{
    MeshTangents(mesh);
} // Compute mesh tangents
void Models::meshBinormals(Mesh *mesh)
{
    MeshBinormals(mesh);
} // Compute mesh binormals
// Model drawing functions
void Models::drawModel(Model model, Vector3 position, float scale, Color tint)
{
    DrawModel(model, position, scale, tint);

} // Draw a model (with texture if set)
void Models::drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);

} // Draw a model with extended parameters
void Models::drawModelWires(Model model, Vector3 position, float scale, Color tint)
{
    DrawModelWires(model, position, scale, tint);
} // Draw a model wires (with texture if set)
void Models::drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
} // Draw a model wires (with texture if set) with extended parameters
void Models::drawBoundingBox(BoundingBox box, Color color)
{
    DrawBoundingBox(box, color);
} // Draw bounding box (wires)
void Models::drawBillboard(Camera my_camera, Texture2D texture, Vector3 center, float size, Color tint)
{
    DrawBillboard(my_camera, texture, center, size, tint);
} // Draw a billboard texture
void Models::drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 center, Vector2 size, Color tint)
{
    DrawBillboardRec(camera, texture, source, center, size, tint);

} // Draw a billboard texture defined by source
// Collision detection functions
bool Models::checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)
{
    return CheckCollisionSpheres(center1, radius1, center2, radius2);

} // Detect collision between two spheres
bool Models::checkCollisionBoxes(BoundingBox box1, BoundingBox box2)
{
    return CheckCollisionBoxes(box1, box2);

} // Detect collision between two bounding boxes
bool Models::checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)
{
    return (CheckCollisionBoxSphere(box, center, radius));

} // Detect collision between box and sphere
bool Models::checkCollisionRaySphere(Ray ray, Vector3 center, float radius)
{
    return CheckCollisionRaySphere(ray, center, radius);
} // Detect collision between ray and sphere
bool Models::checkCollisionRaySphereEx(Ray ray, Vector3 center, float radius, Vector3 *collisionPoint)
{
    return CheckCollisionRaySphereEx(ray, center, radius, collisionPoint);

} // Detect collision between ray and sphere, returns collision point
bool Models::checkCollisionRayBox(Ray ray, BoundingBox box)
{
    return CheckCollisionRayBox(ray, box);

} // Detect collision between ray and box
RayHitInfo Models::getCollisionRayMesh(Ray ray, Mesh mesh, Matrix transform)
{
    return GetCollisionRayMesh(ray, mesh, transform);

} // Get collision info between ray and mesh
RayHitInfo Models::getCollisionRayModel(Ray ray, Model model)
{
    return GetCollisionRayModel(ray, model);

} // Get collision info between ray and model
RayHitInfo Models::getCollisionRayTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)
{
    return GetCollisionRayTriangle(ray, p1, p2, p3);

} // Get collision info between ray and triangle
RayHitInfo Models::getCollisionRayGround(Ray ray, float groundHeight)
{
    return GetCollisionRayGround(ray, groundHeight);

} // Get collision info between ray and ground plane (Y-normal plane)