GLshort wall3_vertices[] = {7670,392,3518,7659,392,-3518,-5470,392,3518,-9643,392,-3518,-6533,-1312,5160,8732,-1312,5160,8698,-1312,-5160,-12190,-1312,-5160,-4997,920,2786,7196,920,2786,7145,920,-2786,-8267,920,-2786};
const GLubyte wall3_indices[] = {6,4,7,5,1,0,1,9,0,6,3,1,4,0,2,3,4,2,10,8,9,11,1,3,9,2,0,2,11,3,6,5,4,5,6,1,1,10,9,6,7,3,4,5,0,3,7,4,10,11,8,11,10,1,9,8,2,2,8,11};
void register_wall3()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, wall3_vertices, sizeof(wall3_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, wall3_indices, sizeof(wall3_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 60;
    esModelArray_index++;
}
