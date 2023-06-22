#ifndef s992retdec_H
#define s992retdec_H

#include "w2c2_base.h"

typedef struct s992retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s992retdecInstance;

void f0(s992retdecInstance*);

void f1(s992retdecInstance*);

U32 f2(s992retdecInstance*);

void f3(s992retdecInstance*,U32);

U32 f4(s992retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s992retdecInstance*,U32,U32,U32,U32,U32);

void f6(s992retdecInstance*,U32);

void f7(s992retdecInstance*,U32,U32,U32);

void f8(s992retdecInstance*,U32,U32,U32);

void s992retdec____wasm_call_ctors(s992retdecInstance*i);

void s992retdec____wasm_apply_data_relocs(s992retdecInstance*i);

U32 s992retdec_func_1(s992retdecInstance*i);

void s992retdec_call_cb(s992retdecInstance*i,U32 l0);

void s992retdecInstantiate(s992retdecInstance* instance, void* resolve(const char* module, const char* name));

void s992retdecFreeInstance(s992retdecInstance* instance);

#endif /* s992retdec_H */

