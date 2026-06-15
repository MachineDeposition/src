GLshort corner2_vertices[] = {10502,-6058,3518,14675,-6058,-3518,-5958,-6058,3518,-5958,-6058,-3518,-7708,-7761,5160,11565,-7761,5160,17222,-7761,-5160,-7702,-7727,-5160,-5430,-5530,2786,10029,-5530,2786,13243,-5530,-2786,-5430,-5530,-2786,-5958,10551,3518,-5958,14724,-3518,-7662,11614,5160,-7662,17271,-5160,-5430,10078,2786,-5430,13127,-2786};
const GLubyte corner2_indices[] = {5,7,6,5,1,0,10,0,1,1,7,3,2,5,0,11,9,10,3,10,1,0,8,2,7,14,15,7,13,3,14,2,12,13,14,12,11,16,8,17,3,13,8,12,2,12,17,13,5,4,7,5,6,1,10,9,0,1,6,7,2,4,5,11,8,9,3,11,10,0,9,8,7,4,14,7,15,13,14,4,2,13,15,14,11,17,16,17,11,3,8,16,12,12,16,17};
void register_corner2()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, corner2_vertices, sizeof(corner2_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, corner2_indices, sizeof(corner2_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 96;
    esModelArray_index++;
}
