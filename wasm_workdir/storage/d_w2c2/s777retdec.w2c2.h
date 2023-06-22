#ifndef s777retdec_H
#define s777retdec_H

#include "w2c2_base.h"

typedef struct s777retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s777retdecInstance;

void f0(s777retdecInstance*);

void f1(s777retdecInstance*);

U32 f2(s777retdecInstance*);

void f3(s777retdecInstance*,U32);

U32 f4(s777retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s777retdecInstance*,U32,U32,U32,U32,U32);

void f6(s777retdecInstance*,U32);

void f7(s777retdecInstance*,U32,U32,U32);

void f8(s777retdecInstance*,U32,U32,U32);

void s777retdec____wasm_call_ctors(s777retdecInstance*i);

void s777retdec____wasm_apply_data_relocs(s777retdecInstance*i);

U32 s777retdec_func_1(s777retdecInstance*i);

void s777retdec_call_cb(s777retdecInstance*i,U32 l0);

void s777retdecInstantiate(s777retdecInstance* instance, void* resolve(const char* module, const char* name));

void s777retdecFreeInstance(s777retdecInstance* instance);

#endif /* s777retdec_H */

