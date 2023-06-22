#ifndef s558retdec_H
#define s558retdec_H

#include "w2c2_base.h"

typedef struct s558retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s558retdecInstance;

void f0(s558retdecInstance*);

void f1(s558retdecInstance*);

U32 f2(s558retdecInstance*);

void f3(s558retdecInstance*,U32);

U32 f4(s558retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s558retdecInstance*,U32,U32,U32,U32,U32);

void f6(s558retdecInstance*,U32);

void f7(s558retdecInstance*,U32,U32,U32);

void f8(s558retdecInstance*,U32,U32,U32);

void s558retdec____wasm_call_ctors(s558retdecInstance*i);

void s558retdec____wasm_apply_data_relocs(s558retdecInstance*i);

U32 s558retdec_func_1(s558retdecInstance*i);

void s558retdec_call_cb(s558retdecInstance*i,U32 l0);

void s558retdecInstantiate(s558retdecInstance* instance, void* resolve(const char* module, const char* name));

void s558retdecFreeInstance(s558retdecInstance* instance);

#endif /* s558retdec_H */

