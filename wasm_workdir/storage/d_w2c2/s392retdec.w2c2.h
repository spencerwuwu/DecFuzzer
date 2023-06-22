#ifndef s392retdec_H
#define s392retdec_H

#include "w2c2_base.h"

typedef struct s392retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s392retdecInstance;

void f0(s392retdecInstance*);

void f1(s392retdecInstance*);

U32 f2(s392retdecInstance*);

void f3(s392retdecInstance*,U32);

U32 f4(s392retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s392retdecInstance*,U32,U32,U32,U32,U32);

void f6(s392retdecInstance*,U32);

void f7(s392retdecInstance*,U32,U32,U32);

void f8(s392retdecInstance*,U32,U32,U32);

void s392retdec____wasm_call_ctors(s392retdecInstance*i);

void s392retdec____wasm_apply_data_relocs(s392retdecInstance*i);

U32 s392retdec_func_1(s392retdecInstance*i);

void s392retdec_call_cb(s392retdecInstance*i,U32 l0);

void s392retdecInstantiate(s392retdecInstance* instance, void* resolve(const char* module, const char* name));

void s392retdecFreeInstance(s392retdecInstance* instance);

#endif /* s392retdec_H */

