#ifndef s640retdec_H
#define s640retdec_H

#include "w2c2_base.h"

typedef struct s640retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s640retdecInstance;

void f0(s640retdecInstance*);

void f1(s640retdecInstance*);

U32 f2(s640retdecInstance*);

void f3(s640retdecInstance*,U32);

U32 f4(s640retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s640retdecInstance*,U32,U32,U32,U32,U32);

void f6(s640retdecInstance*,U32);

void f7(s640retdecInstance*,U32,U32,U32);

void f8(s640retdecInstance*,U32,U32,U32);

void s640retdec____wasm_call_ctors(s640retdecInstance*i);

void s640retdec____wasm_apply_data_relocs(s640retdecInstance*i);

U32 s640retdec_func_1(s640retdecInstance*i);

void s640retdec_call_cb(s640retdecInstance*i,U32 l0);

void s640retdecInstantiate(s640retdecInstance* instance, void* resolve(const char* module, const char* name));

void s640retdecFreeInstance(s640retdecInstance* instance);

#endif /* s640retdec_H */

