#ifndef s794retdec_H
#define s794retdec_H

#include "w2c2_base.h"

typedef struct s794retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s794retdecInstance;

void f0(s794retdecInstance*);

void f1(s794retdecInstance*);

U32 f2(s794retdecInstance*);

void f3(s794retdecInstance*,U32);

U32 f4(s794retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s794retdecInstance*,U32,U32,U32,U32,U32);

void f6(s794retdecInstance*,U32);

void f7(s794retdecInstance*,U32,U32,U32);

void f8(s794retdecInstance*,U32,U32,U32);

void s794retdec____wasm_call_ctors(s794retdecInstance*i);

void s794retdec____wasm_apply_data_relocs(s794retdecInstance*i);

U32 s794retdec_func_1(s794retdecInstance*i);

void s794retdec_call_cb(s794retdecInstance*i,U32 l0);

void s794retdecInstantiate(s794retdecInstance* instance, void* resolve(const char* module, const char* name));

void s794retdecFreeInstance(s794retdecInstance* instance);

#endif /* s794retdec_H */

