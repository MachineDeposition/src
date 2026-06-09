GLshort fire_vertices[] = {-5982,-5042,-7255,-4340,-3400,7597,-5982,6922,-7255,-4340,5280,7597,5982,-5042,-7255,4340,-3400,7597,5982,6922,-7255,4340,5280,7597,7965,940,-9717,5779,940,21189,69,-7024,-9717,50,-4839,21189,-7965,940,-9717,-5779,940,21189,0,8905,-9717,0,6719,21189};
const GLubyte fire_indices[] = {12,3,2,14,7,6,8,5,4,10,1,0,7,8,6,5,10,4,1,12,0,3,14,2,12,13,3,14,15,7,8,9,5,10,11,1,7,9,8,5,11,10,1,13,12,3,15,14};
void register_fire()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, fire_vertices, sizeof(fire_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, fire_indices, sizeof(fire_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 48;
    esModelArray_index++;
}
