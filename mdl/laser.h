GLshort laser_vertices[] = {-0,2251,-3634,-2428,2769,-1004,-0,2792,2038,2427,2769,-1004,-0,32372,-4038,-800,32543,-3172,-0,32550,-2170,799,32543,-3172};
const GLubyte laser_indices[] = {1,4,5,3,4,0,1,6,2,3,6,7,1,0,4,3,7,4,1,5,6,3,2,6};
void register_laser()
{
    esBind(GL_ARRAY_BUFFER, &esModelArray[esModelArray_index].vid, laser_vertices, sizeof(laser_vertices), GL_STATIC_DRAW);
    esBind(GL_ELEMENT_ARRAY_BUFFER, &esModelArray[esModelArray_index].iid, laser_indices, sizeof(laser_indices), GL_STATIC_DRAW);
    esModelArray[esModelArray_index].itp = GL_UNSIGNED_BYTE;
    esModelArray[esModelArray_index].ni = 24;
    esModelArray_index++;
}
