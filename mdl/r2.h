GLshort r2_vertices[] = {-3071,-5469,10230,-2795,-5469,10097,-3347,-5469,10097,-3415,-5469,9799,-3224,-5469,9559,-2918,-5469,9559,-2727,-5469,9799,3493,-5469,10230,3769,-5469,10097,3217,-5469,10097,3149,-5469,9799,3340,-5469,9559,3646,-5469,9559,3837,-5469,9799};
const GLubyte r2_indices[] = {6,4,2,13,11,9,0,1,6,6,5,4,4,3,2,2,0,6,7,8,13,13,12,11,11,10,9,9,7,13};
void register_r2()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, r2_vertices, sizeof(r2_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, r2_indices, sizeof(r2_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 30;
    esModelArray_index++;
}
