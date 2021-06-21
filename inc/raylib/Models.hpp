/*
** EPITECH PROJECT, 2021
** B-YEP-400-COT-4-1-indiestudio-dodji.akuesson
** File description:
** Models
*/

#ifndef MODELS_HPP_
#define MODELS_HPP_

#include "../base.hpp"
namespace Raylib
{
    class Models
    {
    public:
        Models();
        ~Models();
        static void drawLine3D(Vector3 startPos, Vector3 endPos, Color color);
        static void drawPoint3D(Vector3 position, Color color);
        static void drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color);
        static void drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color);
        static void drawTriangleStrip3D(Vector3 *points, int pointsCount, Color color);
        static void drawCube(Vector3 position, float width, float height, float length, Color color);
        static void drawCubeV(Vector3 position, Vector3 size, Color color);
        static void drawCubeWires(Vector3 position, float width, float height, float length, Color color);
        static void drawCubeWiresV(Vector3 position, Vector3 size, Color color);
        static void drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color);
        static void drawSphere(Vector3 centerPos, float radius, Color color);
        static void drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color);
        static void drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color);
        static void drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);
        static void drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);
        static void drawPlane(Vector3 centerPos, Vector2 size, Color color);
        static void drawRay(Ray ray, Color color);
        static void drawGrid(int slices, float spacing);
        static Model loadModel(const char *fileName);
        static Model loadModelFromMesh(Mesh mesh);
        static void unloadModel(Model model);
        static void unloadModelKeepMeshes(Model model);
        static void uploadMesh(Mesh *mesh, bool dynamic);
        static void updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset);
        static void drawMesh(Mesh mesh, Material material, Matrix transform);
        static void drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances);
        static void unloadMesh(Mesh mesh);
        static bool exportMesh(Mesh mesh, const char *fileName);
        static Material *loadMaterials(const char *fileName, int *materialCount);
        static Material loadMaterialDefault(void);
        static void unloadMaterial(Material material);
        static void setMaterialTexture(Material *material, int mapType, Texture2D texture);
        static void setModelMeshMaterial(Model *model, int meshId, int materialId);
        static ModelAnimation *loadModelAnimations(const char *fileName, int *animsCount);
        static void updateModelAnimation(Model model, ModelAnimation anim, int frame);
        static void unloadModelAnimation(ModelAnimation anim);
        static void unloadModelAnimations(ModelAnimation *animations, unsigned int count);
        static bool isModelAnimationValid(Model model, ModelAnimation anim);
        static Mesh genMeshPoly(int sides, float radius);
        static Mesh genMeshPlane(float width, float length, int resX, int resZ);
        static Mesh genMeshCube(float width, float height, float length);
        static Mesh genMeshSphere(float radius, int rings, int slices);
        static Mesh genMeshHemiSphere(float radius, int rings, int slices);
        static Mesh genMeshCylinder(float radius, float height, int slices);
        static Mesh genMeshTorus(float radius, float size, int radSeg, int sides);
        static Mesh genMeshKnot(float radius, float size, int radSeg, int sides);
        static Mesh genMeshHeightmap(Image heightmap, Vector3 size);
        static Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize);
        static BoundingBox getmeshBoundingBox(Mesh mesh);
        static void meshTangents(Mesh *mesh);;
        static void meshBinormals(Mesh *mesh);;
        static void drawModel(Model model, Vector3 position, float scale, Color tint); ;
        static void drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint);
        static void drawModelWires(Model model, Vector3 position, float scale, Color tint);;
        static void drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint);
        static void drawBoundingBox(BoundingBox box, Color color);
        static void drawBillboard(Camera camera, Texture2D texture, Vector3 center, float size, Color tint);
        static void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 center, Vector2 size, Color tint);
        static bool checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2);
        static bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2); 
        static bool checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius);
        static bool checkCollisionRaySphere(Ray ray, Vector3 center, float radius);;
        static bool checkCollisionRaySphereEx(Ray ray, Vector3 center, float radius, Vector3 *collisionPoint);
        static bool checkCollisionRayBox(Ray ray, BoundingBox box);;
        static RayHitInfo getCollisionRayMesh(Ray ray, Mesh mesh, Matrix transform);
        static RayHitInfo getCollisionRayModel(Ray ray, Model model);
        static RayHitInfo getCollisionRayTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3);
        static RayHitInfo getCollisionRayGround(Ray ray, float groundHeight);
    protected:
    private:
    };

} // namespace Raylib

#endif /* !MODELS_HPP_ */
