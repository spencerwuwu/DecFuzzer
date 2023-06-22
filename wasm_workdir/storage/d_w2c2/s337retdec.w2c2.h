#ifndef s337retdec_H
#define s337retdec_H

#include "w2c2_base.h"

typedef struct s337retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s337retdecInstance;

void f0(s337retdecInstance*);

void f1(s337retdecInstance*);

U32 f2(s337retdecInstance*);

void f3(s337retdecInstance*,U32);

U32 f4(s337retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s337retdecInstance*,U32,U32,U32,U32,U32);

void f6(s337retdecInstance*,U32);

void f7(s337retdecInstance*,U32,U32,U32);

void f8(s337retdecInstance*,U32,U32,U32);

void s337retdec____wasm_call_ctors(s337retdecInstance*i);

void s337retdec____wasm_apply_data_relocs(s337retdecInstance*i);

U32 s337retdec_func_1(s337retdecInstance*i);

void s337retdec_call_cb(s337retdecInstance*i,U32 l0);

void s337retdecInstantiate(s337retdecInstance* instance, void* resolve(const char* module, const char* name));

void s337retdecFreeInstance(s337retdecInstance* instance);

#endif /* s337retdec_H */

