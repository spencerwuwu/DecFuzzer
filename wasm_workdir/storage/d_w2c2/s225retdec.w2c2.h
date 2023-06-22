#ifndef s225retdec_H
#define s225retdec_H

#include "w2c2_base.h"

typedef struct s225retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s225retdecInstance;

void f0(s225retdecInstance*);

void f1(s225retdecInstance*);

U32 f2(s225retdecInstance*);

void f3(s225retdecInstance*,U32);

U32 f4(s225retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s225retdecInstance*,U32,U32,U32,U32,U32);

void f6(s225retdecInstance*,U32);

void f7(s225retdecInstance*,U32,U32,U32);

void f8(s225retdecInstance*,U32,U32,U32);

void s225retdec____wasm_call_ctors(s225retdecInstance*i);

void s225retdec____wasm_apply_data_relocs(s225retdecInstance*i);

U32 s225retdec_func_1(s225retdecInstance*i);

void s225retdec_call_cb(s225retdecInstance*i,U32 l0);

void s225retdecInstantiate(s225retdecInstance* instance, void* resolve(const char* module, const char* name));

void s225retdecFreeInstance(s225retdecInstance* instance);

#endif /* s225retdec_H */

