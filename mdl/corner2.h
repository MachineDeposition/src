GLshort corner2_vertices[] = {10502,-6058,3518,14675,-6058,-3518,-5958,-6058,3518,-5958,-6058,-3518,-7708,-7761,5160,11565,-7761,5160,17222,-7761,-5160,-7702,-7727,-5160,-5430,-5530,2786,10029,-5530,2786,13243,-5530,-2786,-5430,-5530,-2786,-5958,10551,3518,-5958,14724,-3518,-7662,11614,5160,-7662,17271,-5160,-5430,10078,2786,-5430,13127,-2786};
const GLubyte corner2_indices[] = {7,5,6,1,5,0,0,10,1,1,7,6,2,5,4,9,11,10,3,10,11,0,8,9,7,14,4,13,7,3,2,14,12,13,14,15,11,16,17,3,17,13,12,8,2,12,17,16,7,4,5,1,6,5,0,9,10,1,3,7,2,0,5,9,8,11,3,1,10,0,2,8,7,15,14,13,15,7,2,4,14,13,12,14,11,8,16,3,11,17,12,16,8,12,13,17};
void register_corner2()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, corner2_vertices, sizeof(corner2_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, corner2_indices, sizeof(corner2_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 96;
    esModelArray_index++;
}
