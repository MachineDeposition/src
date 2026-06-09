GLshort laser_vertices[] = {-0,2251,-3634,-2428,2769,-1004,-0,3676,-1004,-0,2792,2038,2427,2769,-1004,-0,32372,-4038,-800,32543,-3172,-0,32550,-2170,799,32543,-3172};
const GLubyte laser_indices[] = {1,2,0,1,3,2,4,0,2,4,2,3,1,5,6,4,5,0,1,7,3,4,7,8,1,0,5,4,8,5,1,6,7,4,3,7};
void register_laser()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, laser_vertices, sizeof(laser_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, laser_indices, sizeof(laser_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 36;
    esModelArray_index++;
}
