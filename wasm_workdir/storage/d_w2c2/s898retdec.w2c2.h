#ifndef s898retdec_H
#define s898retdec_H

#include "w2c2_base.h"

typedef struct s898retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s898retdecInstance;

void f0(s898retdecInstance*);

void f1(s898retdecInstance*);

U32 f2(s898retdecInstance*);

void f3(s898retdecInstance*,U32);

U32 f4(s898retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s898retdecInstance*,U32,U32,U32,U32,U32);

void f6(s898retdecInstance*,U32);

void f7(s898retdecInstance*,U32,U32,U32);

void f8(s898retdecInstance*,U32,U32,U32);

void s898retdec____wasm_call_ctors(s898retdecInstance*i);

void s898retdec____wasm_apply_data_relocs(s898retdecInstance*i);

U32 s898retdec_func_1(s898retdecInstance*i);

void s898retdec_call_cb(s898retdecInstance*i,U32 l0);

void s898retdecInstantiate(s898retdecInstance* instance, void* resolve(const char* module, const char* name));

void s898retdecFreeInstance(s898retdecInstance* instance);

#endif /* s898retdec_H */

