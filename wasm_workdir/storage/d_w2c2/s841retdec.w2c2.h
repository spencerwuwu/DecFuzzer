#ifndef s841retdec_H
#define s841retdec_H

#include "w2c2_base.h"

typedef struct s841retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s841retdecInstance;

void f0(s841retdecInstance*);

void f1(s841retdecInstance*);

U32 f2(s841retdecInstance*);

void f3(s841retdecInstance*,U32);

U32 f4(s841retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s841retdecInstance*,U32,U32,U32,U32,U32);

void f6(s841retdecInstance*,U32);

void f7(s841retdecInstance*,U32,U32,U32);

void f8(s841retdecInstance*,U32,U32,U32);

void s841retdec____wasm_call_ctors(s841retdecInstance*i);

void s841retdec____wasm_apply_data_relocs(s841retdecInstance*i);

U32 s841retdec_func_1(s841retdecInstance*i);

void s841retdec_call_cb(s841retdecInstance*i,U32 l0);

void s841retdecInstantiate(s841retdecInstance* instance, void* resolve(const char* module, const char* name));

void s841retdecFreeInstance(s841retdecInstance* instance);

#endif /* s841retdec_H */

